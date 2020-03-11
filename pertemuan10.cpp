#include <iostream>

using namespace std;

//ADA 4 INPUTAN SENDING DATA KE FUNCTIONNYA YANG HARUS DIISI

int AlgoritmaBinarySearch(int arrayNya[], int indeksPertama, int indeksTerakhir, int nilaiYangDicari)
{
    if (indeksTerakhir >= indeksPertama)
        {
             int nilaiTengah = indeksPertama + (indeksTerakhir - indeksPertama)/2;
             if (arrayNya[nilaiTengah] == nilaiYangDicari)
                {
                    return nilaiTengah;
                }
                if (arrayNya[nilaiTengah] > nilaiYangDicari)
                {
                     return AlgoritmaBinarySearch(arrayNya, indeksPertama, nilaiTengah-1, nilaiYangDicari);
                }
                 return AlgoritmaBinarySearch(arrayNya, nilaiTengah+1, indeksTerakhir, nilaiYangDicari);
        }
        //HASIL DARI FUNCTION INI ADALAH -1 APABILA NILAI YANG DICARI TIDAK DITEMUKAN
         return -1;
}

int main()
{
    int data[32] = {1,3,5,6,8,9,10,24,35,36,38,40,44,46,48,50,66,77,88,89, 90,91,92,93,95,97,99,100,355,565,878,900};
    int indekspertama = 0;
    int indeksTerakhir = (sizeof(data)/sizeof(*data))-1; //variable indeksTerakhir sudah otomatis terisi nilai indeks terakhir dari variable array data, tinggal pakai saja
    int cari; //= 3;
    cout<<"input nilai = " ;
    cin>>cari;
    cout<<endl;
    int tampil = AlgoritmaBinarySearch(data,indekspertama,indeksTerakhir,cari);
    if(tampil== -1)
    {
        cout<<"data tidak ditemukan"<<endl;
    }
    else
    {
        cout<<"data urutan ke-"<<tampil+1;
    }
    return 0;
}
