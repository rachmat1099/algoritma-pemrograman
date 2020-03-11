#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
#include<stdlib.h>
using namespace std;

class account
{
	int nomorakun;
	char nama[50];
	int deposit;
	char type;
public:
	void buatdataakun();	//berfungsi untuk mendapatkan data dari pengguna
	void tampildataakun() const;	//berfungsi untuk menampilkan data di layar
	void ubahdataakun();	//berfungsi untuk menambahkan data baru
	void dep(int);	//berfungsi untuk menerima jumlah dan menambah jumlah saldo
	void draw(int);	//berfungsi untuk menerima jumlah dan mengurangi jumlah saldo
	void report() const;	//berfungsi untuk menampilkan data dalam format tabel
	int retnomorakun() const;	//berfungsi untuk mengembalikan nomor akun
	int retdeposit() const;	//berfungsi untuk mengembalikan jumlah saldo
	char rettype() const;	//berfungsi untuk mengembalikan jenis akun
};         //class ends here

void account::buatdataakun()
{
	cout<<"\nMasukkan No. akun :";
	cin>>nomorakun;
	cout<<"\n\nMasukkan Nama Pemegang akun: ";
	cin.ignore();
	cin.getline(nama,50);
	cout<<"\nMasukkan Jenis akun (C/S) : ";
	cin>>type;
	type=toupper(type);
	cout<<"\nMasukkan jumlah awal(>=500 untuk menyimpan dan >=1000 untuk saat ini ) : ";
	cin>>deposit;
	cout<<"\n\n\nAccount Created..";
}

void account::tampildataakun() const
{
	cout<<"\nNo rekening. : "<<nomorakun;
	cout<<"\nNama pemilik akun : ";
	cout<<nama;
	cout<<"\nTipe akun: "<<type;
	cout<<"\nJumlah saldo : "<<deposit;
}


void account::ubahdataakun()
{
	cout<<"\nNo rekening. : "<<nomorakun;
	cout<<"\nUbah Nama Pemegang Akun: ";
	cin.ignore();
	cin.getline(nama,50);
	cout<<"\nUbah Jenis Akun: ";
	cin>>type;
	type=toupper(type);
	cout<<"\nUbah jumlah Saldo : ";
	cin>>deposit;
}


void account::dep(int x)
{
	deposit+=x;
}

void account::draw(int x)
{
	deposit-=x;
}

void account::report() const
{
	cout<<nomorakun<<setw(10)<<" "<<nama<<setw(10)<<" "<<type<<setw(6)<<deposit<<endl;
}


int account::retnomorakun() const
{
	return nomorakun;
}

int account::retdeposit() const
{
	return deposit;
}

char account::rettype() const
{
	return type;
}


//***************************************************************
//    	function declaration
//****************************************************************
void bacaakun();	//berfungsi untuk menulis catatan dalam file binary
void tampilsaldo(int);	//berfungsi untuk menampilkan detail akun yang diberikan oleh pengguna
void ubahakun(int);	//berfungsi untuk memodifikasi catatan file
void delete_account(int);	//berfungsi untuk menghapus catatan file
void infoakun();		//berfungsi untuk menampilkan semua detail akun
void setortarik(int, int); //berfungsi untuk menghapus jumlah / menarik jumlah untuk akun yang diberikan
void tampilanawal();	//fungsi layar pengantar

//***************************************************************
//    	THE MAIN FUNCTION OF PROGRAM
//****************************************************************


int main()
{
	char ch;
	int num;
	tampilanawal();
	do
	{
		system("cls");
		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. AKUN BARU";
		cout<<"\n\n\t02. JUMLAH SETORAN";
		cout<<"\n\n\t03. JUMLAH PENARIKAN";
		cout<<"\n\n\t04. PERTANYAAN SALDO";
		cout<<"\n\n\t05. SEMUA DAFTAR PEMEGANG AKUN";
		cout<<"\n\n\t06. HAPUS AKUN";
		cout<<"\n\n\t07. EDIT AKUN";
		cout<<"\n\n\t08. KELUAR";
		cout<<"\n\n\tMasukan pilihan anda (1-8) ";
		cin>>ch;
		system("cls");
		switch(ch)
		{
		case '1':
			bacaakun();
			break;
		case '2':
			cout<<"\n\n\tMasukkan No. akun : "; cin>>num;
			setortarik(num, 1);
			break;
		case '3':
			cout<<"\n\n\tMasukkan No. akun : "; cin>>num;
			setortarik(num, 2);
			break;
		case '4':
			cout<<"\n\n\tMasukkan No. akun : "; cin>>num;
			tampilsaldo(num);
			break;
		case '5':
			infoakun();
			break;
		case '6':
			cout<<"\n\n\tMasukkan No. akun : "; cin>>num;
			delete_account(num);
			break;
		 case '7':
			cout<<"\n\n\tMasukkan No. akun : "; cin>>num;
			ubahakun(num);
			break;
		 case '8':
			cout<<"\n\n\tTerima kasih telah menggunakan sistem manajemen bank";
			break;
		 default :cout<<"\a";
		}
		cin.ignore();
		cin.get();
	}while(ch!='8');
	return 0;
}


//***************************************************************
//    	function baca akun
//****************************************************************

void bacaakun()
{
	account ac;
	ofstream outFile;
	outFile.open("account.dat",ios::binary|ios::app);
	ac.buatdataakun();
	outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
	outFile.close();
}

//***************************************************************
//    	function tampil saldo
//****************************************************************

void tampilsaldo(int n)
{
	account ac;
	bool flag=false;
	ifstream inFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File tidak dapat dibuka !! Tekan tombol apa saja...";
		return;
	}
	cout<<"\nRINCIAN SALDO\n";

    	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
	{
		if(ac.retnomorakun()==n)
		{
			ac.tampildataakun();
			flag=true;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\n\nNomor akun tidak ada";
}


//***************************************************************
//    	function ubah data akun
//****************************************************************

void ubahakun(int n)
{
	bool found=false;
	account ac;
	fstream File;
	File.open("account.dat",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File tidak dapat dibuka !! Tekan tombol apa saja...";
		return;
	}
	while(!File.eof() && found==false)
	{
		File.read(reinterpret_cast<char *> (&ac), sizeof(account));
		if(ac.retnomorakun()==n)
		{
			ac.tampildataakun();
			cout<<"\n\nMasukkan Detail akun Baru"<<endl;
			ac.ubahdataakun();
			int pos=(-1)*static_cast<int>(sizeof(account));
			File.seekp(pos,ios::cur);
			File.write(reinterpret_cast<char *> (&ac), sizeof(account));
			cout<<"\n\n\t Data Diubah";
			found=true;
		  }
	}
	File.close();
	if(found==false)
		cout<<"\n\n Data Tidak Ditemukan ";
}

//***************************************************************
//    	function hapus
//****************************************************************


void delete_account(int n)
{
	account ac;
	ifstream inFile;
	ofstream outFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File tidak dapat dibuka !! Tekan tombol apa saja...";
		return;
	}
	outFile.open("Temp.dat",ios::binary);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
	{
		if(ac.retnomorakun()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
		}
	}
	inFile.close();
	outFile.close();
	remove("account.dat");
	rename("Temp.dat","account.dat");
	cout<<"\n\n\tData dihapus ..";
}

//***************************************************************
//    	function informasi akun/info saldo
//****************************************************************

void infoakun()
{
	account ac;
	ifstream inFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File tidak dapat dibuka !! Tekan tombol apa saja...";
		return;
	}
	cout<<"\n\n\t\tDAFTAR PEMEGANG AKUN\n\n";
	cout<<"====================================================\n";
	cout<<"No. Pin      nama           Tipe   Saldo\n";
	cout<<"====================================================\n";
	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
	{
		ac.report();
	}
	inFile.close();
}

//***************************************************************
//    	function setor tarik
//****************************************************************

void setortarik(int n, int option)
{
	int amt;
	bool found=false;
	account ac;
	fstream File;
	File.open("account.dat", ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File tidak dapat dibuka !! Tekan tombol apa saja...";
		return;
	}
	while(!File.eof() && found==false)
	{
		File.read(reinterpret_cast<char *> (&ac), sizeof(account));
		if(ac.retnomorakun()==n)
		{
			ac.tampildataakun();
			if(option==1)
			{
				cout<<"\n\n\tUNTUK SETORAN JUMLAH ";
				cout<<"\n\nMasukkan jumlah yang akan disetor : ";
				cin>>amt;
				ac.dep(amt);
			}
			if(option==2)
			{
				cout<<"\n\n\tUNTUK MENARIK JUMLAH ";
				cout<<"\n\nMasukkan jumlah yang akan ditarik : ";
				cin>>amt;
				int bal=ac.retdeposit()-amt;
				if((bal<500 && ac.rettype()=='S') || (bal<1000 && ac.rettype()=='C'))
					cout<<"Saldo tidak mencukupi: ";
				else
					ac.draw(amt);
			}
			int pos=(-1)*static_cast<int>(sizeof(ac));
			File.seekp(pos,ios::cur);
			File.write(reinterpret_cast<char *> (&ac), sizeof(account));
			cout<<"\n\n\t Data diubah";
			found=true;
	       }
         }
	File.close();
	if(found==false)
		cout<<"\n\n Record Tidak Ditemukan ";
}


//***************************************************************
//    	FUNCTION TAMPILAN UTAMA
//****************************************************************


void tampilanawal()
{
	cout<<"\n\n\n\t  BANK MANAGEMENT SYSTEM";
	cout<<"\n\n\n\nMADE BY : Kelompok 2";
	cin.get();
}
