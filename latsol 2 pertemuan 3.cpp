#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string nama;
    double keaktifan, tugas, ujian;
    double murni_keaktifan, murni_tugas, murni_ujian, nilai_akhir;

    // 1. Layar Masukan
    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Siswa      : "; getline(cin, nama);
    cout << "Nilai Keaktifan : "; cin >> keaktifan;
    cout << "Nilai Tugas     : "; cin >> tugas;
    cout << "Nilai Ujian     : "; cin >> ujian;

    // 2. Proses Perhitungan
    murni_keaktifan = keaktifan * 0.20;
    murni_tugas = tugas * 0.30;
    murni_ujian = ujian * 0.50;
    nilai_akhir = murni_keaktifan + murni_tugas + murni_ujian;

    cout << "\n========================================\n" << endl;

    // 3. Layar Keluaran
    cout << "Siswa yang bernama " << nama << endl;
    cout << "Dengan nilai presentase yang dihasilkan:" << endl;
    cout << fixed << setprecision(2);
    cout << "Nilai Keaktifan * 20% : " << murni_keaktifan << endl;
    cout << "Nilai Tugas * 30%     : " << murni_tugas << endl;
    cout << "Nilai Ujian * 50%     : " << murni_ujian << endl;
    cout << endl;
    cout << "Jadi Siswa yang bernama " << nama << " Memperoleh nilai akhir sebesar " << nilai_akhir << endl;

    return 0;
}
