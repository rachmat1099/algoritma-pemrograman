#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int angka1, angka2;
    int tambah;
    int kurang;
    int kali;
    float bagi;
    int mod;

    cout<<"PROGRAM KALKULATOR" <<endl;

    cout<<"Masukan angka1 : " ;
    cin>>angka1;
    cout<<"masukan angka2 : " ;
    cin>>angka2;

    tambah=angka1+angka2;
    kurang=angka1-angka2;
    kali=angka1*angka2;
    bagi=(float)angka1/angka2;
    cout<<setprecision(2)<<bagi<<endl;
    mod=angka1%angka2;

    cout <<"======Menampilkan Hasil======" <<endl;
    cout<<angka1<<"+"<<angka2<<"="<<tambah <<endl;
    cout<<angka1<<"-"<<angka2<<"="<<kurang <<endl;
    cout<<angka1<<"*"<<angka2<<"="<<kali <<endl;
    cout<<angka1<<"/"<<angka2<<"="<<bagi <<endl;
    cout<<angka1<<"-"<<angka2<<"="<<mod <<endl;
    return 0;
}
