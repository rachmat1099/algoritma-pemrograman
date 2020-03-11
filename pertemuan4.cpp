#include <iostream>

using namespace std;

int main()
{
    int gaji_pokok=0, tunj=0, gaji_diterima=0, pilihan, tunj_keluarga=0;
    char status;

    cout <<"### Sistem Informasi Penggajian ###" <<endl;
    cout <<"######## PT.SAMI Indonesia ########" <<endl;

    cout <<"Input golongan Anda (1/2/3) : " ;
    cin>>pilihan;

    cout <<"Input Status Anda Menikah/Single (m/s) : " ;
    cin>>status;

    if (pilihan==1 && status=='m')
    {
        gaji_pokok=1000000;
        tunj=5000000;
        tunj_keluarga=0.25*gaji_pokok;
    }

    if (pilihan==1 && status=='s')
    {
        gaji_pokok=1000000;
        tunj=5000000;
    }

    else if (pilihan==2 && status =='m')
    {
        gaji_pokok=750000;
        tunj=2000000;
        tunj_keluarga=0.25*gaji_pokok;
    }

    else if (pilihan==2 && status =='s')
    {
        gaji_pokok=750000;
        tunj=2000000;
    }

    else if (pilihan==3 && status=='m')
    {
        gaji_pokok=500000;
        tunj=1000000;
        tunj_keluarga=0.25*gaji_pokok;
    }

    else if (pilihan==3 && status=='s')
    {
        gaji_pokok=500000;
        tunj=1000000;
    }

    else {
        cout<<"Golongan Tidak Tersedia" <<endl;
    }

    gaji_diterima=gaji_pokok+tunj+tunj_keluarga;

    cout<<"--------Menghitung Total Gaji--------" <<endl;

    cout<<"Rincian Total Gaji Anda : " <<endl;
    cout<<"Gaji Pokok : " <<gaji_pokok <<endl;
    cout<<"Tunjangan Jabatan :" <<tunj <<endl;
    cout<<"Tunjangan Keluarga :" <<tunj_keluarga <<endl;
    cout<<"Gaji Diterima :" <<gaji_diterima <<endl;


    return 0;
}
