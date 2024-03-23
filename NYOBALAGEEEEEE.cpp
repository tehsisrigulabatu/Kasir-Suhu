#include<iostream>
using namespace std;

int main(){
	
	int jmlBarang, harga, total, pilihan;
	string item;
	
	cout<<"selamat datang di SmesaMart"<<endl;
	cout<<"1. popmie Rp7000"<<endl;
	cout<<"2. es krim walls Rp5000"<<endl;
	cout<<"3. air mineral Rp3000"<<endl;
	cout<<"4. selesai"<<endl;
	
	do{
		cout<<"masukkan barang yang ingin anda beli";
		cin>>pilihan;
		
		switch(pilihan){
			case 1 : 
				item = "popmie";
				harga = 7000;
				cout<<"masukkan jumlah barang";
				cin>>jmlBarang;
				total += harga * jmlBarang;
				cout<<jmlBarang<<" "<<item<<" Rp "<<harga * jmlBarang<<endl;
				break;
			case 2 : 
				item = "es krim walls";
				harga = 5000;
				cout<<"masukkan jumlah barang";
				cin>>jmlBarang;
				total += harga * jmlBarang;
				cout<<jmlBarang<<" "<<item<<" Rp "<<harga * jmlBarang<<endl;
				break;
			case 3 : 
				item = "air mineral";
				harga = 3000;
				cout<<"masukkan jumlah barang";
				cin>>jmlBarang;
				total += harga * jmlBarang;
				cout<<jmlBarang<<" "<<item<<" Rp "<<harga * jmlBarang<<endl;
				break;
			case 4 :
				cout<<"total yang harus anda bayar Rp "<< total <<endl;
				
		}
		
	}while(pilihan != 4);
	
}
