#include <iostream>

using namespace std;

int main(){
    int x=1,har,tot1,tot2=0,jum,dis,tothar;
    char jaw;
    cout<<"||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"|========== TOKO KENAPA AMIKOM ==========|"<<endl;
    cout<<"||||||||||||||||||||||||||||||||||||||||||"<<endl<<endl;
    cout<<endl;
    jaw='y';
    while(jaw=='Y' || jaw=='y'){
        cout<<"Kode Barang : KD-000"<<x<<endl;
        cout<<"Input Harga Barang : Rp ";
        cin>>har;
        cout<<"Input Jumlah yang dibeli : ";
        cin>>jum;
        tot1=har*jum;
        if(tot1>10000){
            dis=tot1*0.1;
            tothar=tot1-dis;
        }
        else{
            dis=0;
            tothar=tot1;
        }
        cout<<"Potongan Harga : Rp "<<dis<<endl;
        cout<<"Subtotal : Rp "<<tothar;
        tot2+=tothar;
        cout<<endl<<endl;
        cout<<"Apakah Anda Ingin Membeli Barang Lagi (Y/N) : ";
        cin>>jaw;
        x++;
    }
    cout<<endl<<endl;
    cout<<"Total yang Harus dibayar : Rp "<<tot2<<endl;
    return 0;
}
