#include<iostream>
using namespace std;

int main()
{
	int suhu;
	cout<<"Nama  = Danu Adiputra"<<endl;
	cout<<"NIM   = 311810929"<<endl;
	cout<<"Kelas = 18.B.2"<<endl<<endl;
	cout<<"PROGRAM MENGETAHUI ZAT BEKU ATAU CAIR"<<endl<<endl;
	cout<<"Masukkan derajat suhu benda = ";cin>>suhu;
	cout<<"benda tersebut ";
	if(suhu<0)
	{
		cout<<"BEKU";
	}
	else if(suhu>0)
	{
		cout<<"CAIR";
	}
}
