#include <iostream>

using namespace std;

int main()
{
    int jmlhbarang, hargabarang, jmlhdibeli, total=0;
    cout<< "======TOKO KELONTONG AMIKOM======" <<endl;
    cout<< "+++++++++++++++++++++++++++++++++" <<endl;
    cout<< "\nBerapa banyak barang yang dibeli : ";
    cin>>jmlhbarang;

    for(int x=1; x<=jmlhbarang; x++){
        cout<< "\nKode barang : KD000"<<x<< endl;
        cout<< "Input harga barang : Rp";
        cin>>hargabarang;
        cout<< "Input barang yang dibeli : ";
        cin>>jmlhdibeli;
        total +=hargabarang*jmlhdibeli;
    }
    cout<< "\nTOTAL YANG HARUS DIBAYARKAN : Rp"<<total <<endl;
    return 0;
}

