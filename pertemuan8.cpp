#include <iostream>

using namespace std;

int main()
{
    int pil, input, nilai;
    int data[10] = {0,0,0,0,0,0,0,0,0,0};

    while(pil != false){
        cout<<"Menu Program :"<<endl;
        cout<<"1. Tampil data"<<endl<<"2. Tambah data"<<endl<<"3. Edit data"<<endl<<"4. Hapus data";
        cout<<endl<<endl<<"Input pilihan anda (1/2/3/4) : ";
        cin>>pil;
        switch(pil)
        {
        case 1:
            system("cls");
            cout<<"Anda memilih menu tampil data" << endl <<endl;
            for (int x=0; x<10; x++){
                cout << "Data ke- " << 1+x << " : " << data[x] <<endl;
            }
            break;

        case 2:
            system("cls");
            cout<<"Anda memilih menu tambah data" <<endl <<endl;
            for (int x=0; x<10; x++) {
                cout<<"Tambah data ke - " << 1+x << " : " <<data[x] <<endl;
            }
            cout<<endl;
            cout<<"Disimpan urutan ke : ";
            cin>>input;
            cout<<"Nilai yang ingin disimpan : ";
            cin>>nilai;

            data[input-1] = nilai;

            system("cls");
            cout<<"Data berhasil disimpan" <<endl;

            for (int x=0; x<10; x++) {
                cout << "Data ke- " << 1+x << " : " << data[x] <<endl;
            }
            break;

        case 3:
            system("cls");
                cout<<"Anda memilih menu edit data" <<endl <<endl;
            for (int x=0; x<10; x++) {
                cout << "Data ke- " << 1+x << " : " << data[x] <<endl;
            }
            cout<<endl;
            cout<<"Urutan data keberapa yang ingin anda rubah : ";
            cin >> input;
            cout << "Input nilainya  : ";
            cin >> nilai;
            data[input-1] = nilai;

            system("cls");
            cout<<"Data berhasil dirubah" <<endl;

            for (int x =0; x <10; x++)
            {
                cout << "Data ke- " << 1+x << " : " << data[x]<<endl;
            }
            break;

        case 4:
            system("cls");
            cout<<"Anda memilih menu hapus data" <<endl <<endl;

            for (int x=0; x<10; x++ ) {
                cout<<"Data ke - " <<1+x << " : " <<data[x] <<endl;
            }
            cout<<"Urutan keberapa yang ingin anda hapus : ";
            cin>>input;

            data[input-1] = 0;

            system("cls");
            cout<<"Data berhasil dihapus" <<endl;

            for (int x=0; x<10; x++) {
                cout<<"Data ke- " << 1+x << " : " << data[x] <<endl;
            }

            break;

        default:
            cout<<"maaf pilihan tidak ada";
            break;
        }
        cout<<endl;
        cout<<endl;
    }

    return 0;
}
