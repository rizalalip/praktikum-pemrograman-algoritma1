#include <iostream>
#include <string>
#include <iomanip> // Diperlukan untuk mengatur presisi koma (setprecision)

using namespace std;

int main() {
    // Deklarasi variabel
    string npm, nama;
    double tugas1, tugas2, tugas3, rata_rata;

    // ==========================================
    // 2. Layar Masukkan
    // ==========================================
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    
    cout << "NPM             : ";
    getline(cin, npm);
    
    cout << "Nama            : ";
    getline(cin, nama);
    
    cout << "Nilai Tugas I   : ";
    cin >> tugas1;
    
    cout << "Nilai Tugas II  : ";
    cin >> tugas2;
    
    cout << "Nilai Tugas III : ";
    cin >> tugas3;

    // Proses Perhitungan Nilai Rata-rata
    rata_rata = (tugas1 + tugas2 + tugas3) / 3.0;

    // ==========================================
    // 3. Layar Keluaran
    // ==========================================
    cout << "\nLayar Keluaran" << endl;
    cout << "NPM " << npm << " Siswa yang bernama " << nama << endl;
    
    // Mengatur agar output desimal menampilkan 2 angka di belakang koma
    cout << fixed << setprecision(2);
    cout << "Memperoleh nilai rata-rata " << rata_rata << " dari hasil tugas yang diikutinya." << endl;

    return 0;
}
