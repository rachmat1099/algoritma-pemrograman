#include <iostream>
using namespace std;

int main(){
	int data[7]={10,13,17,34,58,67,99};
	int N=7;
	int kiri=0,kanan=N-1,tengah,cari;
	int tanda=0;
	
	cout<<"LIST DATA : 10, 13, 17, 34, 58, 67, 99"<<endl<<endl;
	cout<<"Masukkan data yang dicari : ";cin>>cari;
	
	while((kiri<=kanan)&&(tanda==0)){
		tengah=(kiri+kanan)/2;
		cout<<"Data Tengah = "<<tengah<<endl;
		
		if (data[tengah]==cari)tanda=1;
		else if(cari<data[tengah]){
			cout<<"Cari di kiri\n";
			kanan=tengah-1;
		}
		else{
			kiri=tengah+1;
			cout<<"Cari di kanan\n";
		}
		if(tanda==1)cout<<"Data ada\n";
		else cout<<"Data tidak ada\n";
		}
	}

