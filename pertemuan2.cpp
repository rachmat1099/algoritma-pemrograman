#include <iostream>
using namespace std;
int main ()
{

    string nama, nim, prodi;
    int umur, thnlahir;

    cout<<"NAMA KAMU = ";
    getline(cin,nama);
    cout<<"NIM KAMU = " ;
    getline(cin,nim);
    cout<<"JURUSAN KAMU = " ;
    getline(cin,prodi);
    cout<<"TAHUN LAHIR = ";
    cin>>umur;

    thnlahir=2019-umur;

    cout<<"------------------------------------------"<<endl;
    cout<<"Nama Kamu Adalah : " <<nama<<endl;
    cout<<"NIM Kamu Adalah : " <<nim<<endl;
    cout<<"Jurusan Kamu Adalah : " <<prodi<<endl;
    cout<<"Umur Kamu Sekarang Adalah : " <<thnlahir<<endl;

return 0;

}
