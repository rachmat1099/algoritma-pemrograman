#include <iostream>
#include <stdlib.h>

using namespace std;

int angka[5][5];
int MIN = 20;
int MAX = 99;
int maks,mins, total=0, m, x;
float rata;


int main()
{
    //isi data dengan generate angka acak
    for (m=0; m<5; m++){
        for(x=0; x<5; x++){
            //MIN adalah nilai batas bawah
            //MAX adalah nilai batas atas
            angka[m][x] = MIN + rand() % ((MAX + 1) - MIN);
        }
    }
    //tampil angka array multidimensi
    maks = angka[0][0];
    mins = angka[0][0];
    for (m=0; m<5; m++){
        for(x=0; x<5; x++){
            cout<<angka[m][x]<<" ";

            if(angka[m][x] > maks){
                maks = angka[m][x];
            }
            if(angka[m][x] < mins){
                mins = angka[m][x];
            }
            total = total+angka[m][x];
        }
        cout<<endl;
    }
    rata = (float)total/(m*x);
    cout<<"\nNilai Terbesar   : "<<maks <<endl;
    cout<<"Nilai Terkecil   : "<<mins<<endl;
    cout<<"Total            : "<<total<<endl;
    cout<<"Rata - Rata      : "<<rata<<endl;

    return 0;
}
