#include <iostream>
using namespace std;

int main() {
    string nama;
    float keaktifan, tugas, ujian;
    float murniKeaktifan, murniTugas, murniUjian, nilaiAkhir;

    cout << "PROGRAM HITUNG NILAI AKHIR\n\n";
    cout << "Nama Siswa   : "; cin >> nama;
    cout << "Nilai Keaktifan : "; cin >> keaktifan;
    cout << "Nilai Tugas  : "; cin >> tugas;
    cout << "Nilai ujian  : "; cin >> ujian;

    murniKeaktifan = keaktifan * 0.20;
    murniTugas = tugas * 0.30;
    murniUjian = ujian * 0.50;
    
    nilaiAkhir = murniKeaktifan + murniTugas + murniUjian;

    cout << "\nSiswa yang bernama " << nama << "\n";
    cout << "Dengan nilai presentase yang dihasilkan:\n";
    cout << "Nilai Keaktifan * 20%: " << murniKeaktifan << "\n";
    cout << "Nilai Tugas * 30%    : " << murniTugas << "\n";
    cout << "Nilai Ujian * 50%    : " << murniUjian << "\n\n";
    cout << "Jadi Siswa yang bernama " << nama << " Memperoleh nilai akhir sebesar " << nilaiAkhir << "\n";

    return 0;
}