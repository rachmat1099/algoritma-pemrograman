#include <iostream>

using namespace std;

struct waktu
{
    int tanggal;
    string bulan;
    int tahun;
};
struct nilai
{
    float ipk;
    int sks;
};
struct data
{
    string prodi;
    int angk;
    string kelas;
    struct nilai n;
    struct waktu w;
};
struct biodata
{
    string nama;
    string alamat;
    int umur;
    struct data kh;
}um[1];


int main()
{
    for (int i=0; i<1; i++)
    {
        cout << "Nama       : ";
        cin>>um[i].nama;
        cout << "Alamat     : ";
        cin>>um[i].alamat;
        cout << "Umur       : ";
        cin>>um[i].umur;
        cout << "Prodi      : ";
        cin>>um[i].kh.prodi;
        cout << "Angkatan   : ";
        cin>>um[i].kh.angk;
        cout << "Kelas      : ";
        cin>>um[i].kh.kelas;
        cout << "IPK        : ";
        cin>>um[i].kh.n.ipk;
        cout << "SKS        : ";
        cin>>um[i].kh.n.sks;
        cout << "Tanggal    : ";
        cin>>um[i].kh.w.tanggal;
        cout << "Bulan      : ";
        cin>>um[i].kh.w.bulan;
        cout << "Tahun      : ";
        cin>>um[i].kh.w.bulan;
        cout << endl << endl;
    }
    cout << endl << endl;
    for (int i=0; i<1; i++)
    {
        cout << "Nama       : "<<um[i].nama<<endl;
        cout << "Alamat     : "<<um[i].alamat<<endl;
        cout << "Umur       : "<<um[i].umur<<endl;
        cout << "Prodi      : "<<um[i].kh.prodi<<endl;
        cout << "Angkatan   : "<<um[i].kh.angk<<endl;
        cout << "Kelas      : "<<um[i].kh.kelas<<endl;
        cout << "IPK        : "<<um[i].kh.n.ipk<<endl;
        cout << "SKS        : "<<um[i].kh.n.sks<<endl;
        cout << "Tanggal    : "<<um[i].kh.w.tanggal<<endl;
        cout << "Bulan      : "<<um[i].kh.w.bulan<<endl;
        cout << "Tahun      : "<<um[i].kh.w.bulan<<endl;
        cout << endl << endl;
    }
    return 0;

}
