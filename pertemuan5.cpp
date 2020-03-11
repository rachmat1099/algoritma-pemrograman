#include <iostream>

using namespace std;

int main()
{
    string nama;
    int gajipokok,
    tunjpokok=0,
    tunjanak=0,
    tunjkeluarga=0;
    char status,anak,inputan;

    cout<<" ==== APLIKASI PENGGAJIAN ==== " <<endl;
    cout<<"====== PT. MORAT MARET ====== " <<endl;
    cout<<endl;
    cout << "Input nama anda : ";
    cin >> nama;
    cout << "Input data golongan anda (A/B/C) : ";
    cin >> inputan;
    cout << "Input status anda menikah/single (m/s) : ";
    cin >> status;

    switch(inputan){
    case 'A':
    gajipokok=1000000;
    tunjpokok=5000000;
    break;
    case 'B':
    gajipokok=750000;
    tunjpokok=2000000;
    break;
    case 'C':
    gajipokok=500000;
    tunjpokok=1000000;
    break;
    }
    if(status=='m'){
        tunjkeluarga=gajipokok*0.25;
        cout<<"Input status anak cowok/cewek (l/p) jika belum (b) : ";
        cin>>anak;
        if(anak=='l'){
            tunjanak=gajipokok*0.1;
        }else if(anak=='p'){
            tunjanak=gajipokok*0.07;
        }else if(status=='s'){
            tunjanak=0;
        }else{
            tunjanak=0;
        }
    }else{
        tunjkeluarga=0;
    }
    cout << endl;
    cout << "------------TOTAL GAJI---------------" << endl;
    cout << endl;

    cout <<"RINCIAN TOTAL GAJI ANDA" << endl;
    cout<<"Gaji Pokok \t\t : "<<gajipokok<<endl;
    cout<<"Tunjangan Jabatan \t : "<<tunjpokok<<endl;
    cout<<"Tunjangan Keluarga \t : "<<tunjkeluarga<<endl;
    cout<<"Tunjuangan Anak \t : "<<tunjanak<<endl;
    cout<<"Gaji Diterima \t\t : "<<gajipokok+tunjpokok+tunjkeluarga+tunjanak<<endl;

    return 0;
}
