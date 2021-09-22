/* Program Tiga */
/* Menghitung Cicilan, Total Harga Cicilan dan Keuntungan Dealer */

#include <iostream>
using namespace std;

int main () {
	float harga_pokok, harga_beli, harga_motor, lama_kredit, bunga, cicilan, total_harga_motor, keuntungan_dealer;
	
	cout << "Masukan Harga Motor = Rp. ";
	cin >> harga_motor;
	cout << "Masukan Lama Waktu kredit (bulan) = ";
	cin >> lama_kredit;
	harga_pokok=harga_motor/lama_kredit;
	cout << "\nHarga Pokok = Rp. "<<harga_pokok;
	bunga=harga_pokok*0.1;
	cout << "\nBunga Yang di Peroleh = Rp. "<<bunga;
	cicilan=harga_pokok+bunga;
	cout << "\nCicilan Yang di Bayar = Rp. " <<cicilan;
	total_harga_motor=cicilan*lama_kredit;
	cout << "\nTotal Harga Motor = Rp. "<<total_harga_motor;
	keuntungan_dealer=total_harga_motor-harga_motor;
	cout<< "\nKeuntungan Dealer = Rp. "<<keuntungan_dealer;

	return 0;	
}
