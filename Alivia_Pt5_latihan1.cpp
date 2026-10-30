#include <iostream>
using namespace std;

int main() {
    string npm, nama;
    float t1, t2, t3, rata;

    cout << "PROGRAM HITUNG NILAI RATA-RATA\n";
    cout << "NPM       : "; cin >> npm;
    cout << "Nama      : "; cin >> nama;
    cout << "Tugas I   : "; cin >> t1;
    cout << "Tugas II  : "; cin >> t2;
    cout << "Tugas III : "; cin >> t3;

    rata = (t1 + t2 + t3) / 3;

    cout << "\nNPM " << npm << " Siswa yang bernama " << nama << "\n";
    cout << "Memperoleh nilai rata-rata " << rata << " dari hasil tugas yang diikutinya.\n";

    return 0;
}