#include <iostream>
#include <string>
using namespace std;

void hitung(int harga, int hari, string nama, string nama_mobil){
	int harga_discount, total;
	float discount;
	if(hari >= 7){
		discount = 0.05;
	}else{
		discount = 0;
	}

	total = harga*hari;
	harga_discount = discount*total;

	cout<<"Nama Customer : "<<nama<<endl;
	cout<<"Jumlah Hari : "<<hari<<endl;
	cout<<"Mobil Yang Dipilih : "<<nama_mobil<<endl;
	cout<<"Total Harga : "<<total<<endl;
	cout<<"Discount : Rp."<<harga_discount<<endl;
	cout<<"Total Harga Yang Harus Dibayar : "<<total-harga_discount<<endl;
}

int main(){
	int mobil, hari, total_harga, discount, total_bayar;
	std::string nama_mobil, nama;
	cout<<"[1] Toyota Innova | Rp.500.000/Hari"<<endl;
	cout<<"[2] Honda Mobilio | Rp.300.000/Hari"<<endl;
	cout<<"[3] Daihatsu Xenia | Rp.250.000/Hari"<<endl;
	cout<<"Sewa 7 Hari atau lebih discount 5%"<<endl;

	cout<<"Masukan Nama : ";
	getline(cin, nama);
	cout<<"Masukan pilihan mobil : ";
	cin>>mobil;
	cout<<"Jumlah Hari : ";
	cin>>hari;

	switch (mobil){
		case 1:
			nama_mobil = "ToyotaInnova";
			hitung(500000,hari, nama, nama_mobil);
		break;
		case 2:
			nama_mobil = "HondaMobilio";
			hitung(300000,hari, nama, nama_mobil);
		break;
		case 3:
			nama_mobil = "DaihatsuXenia";
			hitung(250000,hari, nama, nama_mobil);
		break;
		default:
			cout<<"Out Of Range"<<endl;
		break;
	}
}