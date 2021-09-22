/* Program Dua */
/* Menghitung Rata-Rata dari Mata Kuliah Pemrograman */

#include<iostream>

using namespace std;

int main (){
	int nilai_praktikum, nilai_teori, nilai_tugas_dan_final_project, ratarata, n_prak, n_teori, n_fipro;
	cout << "PROGRAM MENGHITUNG RATA-RATA MATKUL PEMROGRAMAN";
	cout << "\nMasukan Nilai Praktikum = ";
	cin >>nilai_praktikum;
	cout << "Masukan Nilai Teori = ";
	cin >>nilai_teori;
	cout << "Masukan Nilai Tugas dan Final Project = ";
	cin >>nilai_tugas_dan_final_project;
	
	n_prak=nilai_praktikum*40/100;
	n_teori=nilai_teori*40/100;
	n_fipro=n_fipro*20/100;
	ratarata=n_prak+n_teori+n_fipro;
	
	cout << "\nRatarata matkul pemrograman = "<<ratarata;
	




	return 0;
}

