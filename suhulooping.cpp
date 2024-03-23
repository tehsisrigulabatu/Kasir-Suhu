#include<iostream>
using namespace std;

int main(){
	double c, r, f, k;
	string lanjut;
	
	do{
		system("cls");
		cout<<"konversi suhu celcius"<<endl;
		cout<<"masukkan suhu celcius : "; cin>>c;
		cout<<r<<" derajat reamur"<<endl;
		cout<<f<<" derajat fahrenheit"<<endl;
		cout<<k<<" derajat kelvin"<<endl;
		cout<<"<lanjut y/n?"; cin>>lanjut;
		
	}while(lanjut == "y");
	system("cls");
	cout<<"program telah selesai"<<endl;
	
}
