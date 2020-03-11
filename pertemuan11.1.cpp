#include <iostream>
using namespace std;

	int data[5] = {1,2,3,4,5};
	int cari = 6, i = 2;
	int caridata ()
{
if (data[i] == cari)
	{
		cout<<"Data "<< cari<<" Data berada di " << i+1<<endl;
	}
	else if (i>=0)
	{
		i--;
		caridata();
	}
	else
	{
		cout<<" Data tidak ada ";
	}
}
int main()
{
	caridata();
	return 0;
}
