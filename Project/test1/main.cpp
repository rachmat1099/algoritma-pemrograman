//PROGRAM ATM
#include<windows.h>
#include <iostream>
using namespace std;

long nSaldo = 5000000;  //global variabel


int transaksi(int a, int b) //function utk menu tarik tunai
{
    nSaldo= a-b;
    cout<<endl;
    cout<<"Transaksi berhasil !"<<endl<<endl;
    cout<<"Jumlah saldo anda saat ini adalah : Rp. "<<nSaldo<<endl<<endl;
    cout<<"1. Kembali"<<endl;
    cout<<"2. Keluar"<<endl<<endl;
     } //akhir function

int main()
{
    char cNama[50];
    int nPin, nTransfer;
    int nPil[7];
    char chRek[5];

    awal:
    system("cls");
    cout<<"SELAMAT DATANG DI ATM BCA"<<endl<<endl;
    cout<<"Masukan PIN anda : "; cin>>nPin;

    if (nPin == 2014)
    {

             system("cls");
             cout<<"==========ATM BCA=========="<<endl<<endl;
             cout<<"1. Cek Saldo"<<endl;
             cout<<"2. Tarik Tunai"<<endl;
             cout<<"3. Transfer"<<endl<<endl;
             cout<<"Pilih menu : "; cin>>nPil[0];cout<<endl;


             switch (nPil[0])    //Switch to case menu
             {
                    case 1:      //Case menu 1
                         cout<<"Jumlah saldo anda saat ini adalah : Rp. "<<nSaldo<<endl<<endl;
                         cout<<"1. Kembali"<<endl;
                         cout<<"2. Keluar"<<endl<<endl;
                         cout<<"Pilih : "; cin>>nPil[2];
                         if (nPil[2] == 1)
                         {
                                     goto awal;
                                     }
                                     {
                                          break;
                                          }

                    case 2:      //Case menu 2
                         cout<<"Tarik Tunai"<<endl<<endl;
                         cout<<"1. Rp. 100.000 \t \t";      cout<<"5. Rp. 1.500.000"<<endl;
                         cout<<"2. Rp. 200.000 \t \t";      cout<<"6. Rp. 2.000.000"<<endl;
                         cout<<"3. Rp. 500.000 \t \t";      cout<<"7. Rp. 3.000.000"<<endl;
                         cout<<"4. Rp. 1.000.000 \t";       cout<<"8. Rp. 5.000.000"<<endl<<endl;
                         cout<<"Pilih : ";cin>>nPil[3];
                         switch (nPil[3]) //Sub case menu 2
                         {
                                case 1:  //sub case menu 2 - 1

                                     transaksi(nSaldo, 100000);
                                     cout<<"Pilih : ";cin>>nPil[4];
                                     if (nPil[4] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      goto akhir;;
                                                      }


                                case 2:  //sub case menu 2 - 2

                                     transaksi(nSaldo, 200000);
                                     cout<<"Pilih : ";cin>>nPil[4];
                                     if (nPil[4] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      goto akhir;;
                                                      }

                                case 3:  //sub case menu 2 - 3

                                     transaksi(nSaldo, 500000);
                                     cout<<"Pilih : ";cin>>nPil[4];
                                     if (nPil[4] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      goto akhir;
                                                      }

                                case 4:  //sub case menu 2 - 4

                                     transaksi(nSaldo, 1000000);
                                     cout<<"Pilih : ";cin>>nPil[4];
                                     if (nPil[4] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      goto akhir;
                                                      }

                                case 5:  //sub case menu 2 - 5

                                     transaksi(nSaldo, 1500000);
                                     cout<<"Pilih : ";cin>>nPil[4];
                                     if (nPil[4] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      goto akhir;
                                                      }

                                case 6:  //sub case menu 2 - 6

                                     transaksi(nSaldo, 2000000);
                                     cout<<"Pilih : ";cin>>nPil[4];
                                     if (nPil[4] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      goto akhir;
                                                      }

                                case 7:  //sub case menu 2 - 7

                                     transaksi(nSaldo, 3000000);
                                     cout<<"Pilih : ";cin>>nPil[4];
                                     if (nPil[4] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      goto akhir;
                                                      }

                                case 8:  //sub case menu 2 - 8

                                     transaksi(nSaldo, 5000000);
                                     cout<<"Pilih : ";cin>>nPil[4];
                                     if (nPil[4] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      goto akhir;
                                                      }

                                                      }//Akhir sub case menu 2


                    case 3:     //Case menu 3

                         ulang:
                         cout<<"Masukan nomor rekening (Max 5 digit): "; cin>>chRek;
                         cout<<"Masukan jumlah transfer      \t    : "; cin>>nTransfer; cout<<endl<<endl;
                         cout<<"Nomor rekening  : "<<chRek<<"\nJumlah transfer : "<<nTransfer<<endl<<endl;
                         cout<<"1. Transfer"<<endl;
                         cout<<"2. Ulangi"<<endl<<endl;
                         cout<<"Pilih : "; cin>>nPil[5];
                         if (nPil[5] == 1)
                         {
                                     cout<<endl;
                                     nSaldo = nSaldo - nTransfer;
                                     cout<<"Transaksi berhasil !"<<endl;
                                     cout<<"Jumlah saldo anda saat ini adalah : Rp. "<<nSaldo<<endl<<endl;
                                     cout<<"1. Kembali"<<endl;
                                     cout<<"2. Keluar"<<endl<<endl;
                                     cout<<"Pilih : "; cin>>nPil[6];
                                     if (nPil[6] == 1)
                                     {
                                                 goto awal;
                                                 }
                                                 {
                                                      break;
                                                      }
                                                      }
                                                      {
                                                            cout<<endl;
                                                            goto ulang;
                                                            }


                         } //Akhir case menu
                         }
                         {
                          cout<<"PIN anda salah !"<<endl<<endl;
                          cout<<"1. Kembali"<<endl;
                          cout<<"2. Keluar"<<endl<<endl;
                          cout<<"Pilih : "; cin>>nPil[1];
                          if(nPil[1] == 1)
                          {
                                     goto awal;
                                     }
                                     {
                                          goto akhir;
                                          }
                                          }


akhir:
system("PAUSE");
return 0;

}
