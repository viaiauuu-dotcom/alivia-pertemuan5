#include<iostream>
#include<string>
using namespace std;

int main() {
	string nama;
	float nilai1, nilai2, nilai3, rata;
	string hadiah;
	
	cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl << endl;
	cout << "Nama Siswa : " ;
	getline(cin, nama);
	cout << "Nilai Pertandingan I : ";
	cin >> nilai1 ;
	cout << "Nilai Pertandingan II : ";
	cin >> nilai2 ;
	cout << "Nilai Pertandingan III : ";
	cin >> nilai3 ;
	
	rata = (nilai1 + nilai2 + nilai3) / 3;
	
	if(rata >= 85) {
		hadiah = "Seperangkat Mobil";
	
	}
	else if (rata >= 70) {
		hadiah = "Seperangkat Uang sebesar Rp. 500,000";
	}
	else {
		hadiah = "Hiburan";
	}
	
	cout << endl;
	cout << "Siswa yang bernama " << nama << endl;
	cout << "Memperoleh nilai rata-rata " << rata << " dari hasil" << endl;
	cout << "perlombaan yang diikutinya. " << endl;
	cout << "Hadiah yang didapat adalah " << hadiah << endl;
	
	return 0;

	
}
