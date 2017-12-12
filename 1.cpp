#include <iostream>
using namespace std;

void hitung(int harga){
	int jumlah;
	int total;

	cout<<"Masukan Jumlah : ";
	cin>>jumlah;
	total = jumlah*harga;
	cout<<"Total Harga Adalah : "<<total<<endl;
}

int main(){
	int pilihan;

	cout<<"[1] Milo | Rp. 10.000"<<endl;
	cout<<"[2] Kopi | Rp. 5.000"<<endl;
	cout<<"[3] Cola Cola | Rp. 2500"<<endl;
	cout<<"[4] Jus Orange | Rp. 2000"<<endl;
	cout<<"Masukan Pilihan : ";
	cin>>pilihan;

	switch(pilihan){
		case 1 :
			hitung(10000);
		break;
		case 2 :
			hitung(5000);
		break;
		case 3 :
			hitung(2500);
		break;
		case 4 :
			hitung(2000);
		break;
		default:
			cout<<"out of range";
		break;
	}


}