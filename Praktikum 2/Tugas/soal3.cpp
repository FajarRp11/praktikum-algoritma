#include <iostream>
#include <conio.h>

using namespace std;

int main () {
    const int gaji_pokok = 300000;
    float t_jabatan = 0, t_pendidikan = 0, h_lembur = 0;
    string nama, pendidikan;
    int j_kerja, golongan;

    cout << "PROGRAM HITUNG GAJI KARYAWAN" << endl;
    cout << "Nama Karyawan : ";
    cin >> nama;
    cout << "Golongan Jabatan : ";
    cin >> golongan;
    cout << "Pendidikan : ";
    cin >> pendidikan;
    cout << "Jumlah jam kerja : ";
    cin >> j_kerja;

    switch (golongan)
    {
    case 1:
        t_jabatan = 0.05 * gaji_pokok;
        break;
    case 2:
        t_jabatan = 0.1 * gaji_pokok;
        break;
    case 3:
        t_jabatan = 0.15 * gaji_pokok;
        break;
    default:
        cout << "Golongan tidak valid" << endl;
        break;
    }

    if (pendidikan == "SMA") {
        t_pendidikan = 0.025 * gaji_pokok;
    } else if (pendidikan == "D1") {
        t_pendidikan = 0.05 * gaji_pokok;
    } else if (pendidikan == "D3") {
        t_pendidikan = 0.2 * gaji_pokok;
    } else if (pendidikan == "S1") {
        t_pendidikan = 0.3 * gaji_pokok;
    }
    
    if (j_kerja > 8) {
        h_lembur = (j_kerja - 8) * 3500;
    }

    float total = gaji_pokok + t_jabatan + t_pendidikan + h_lembur;

    cout << "\nKaryawan yang bernama " << nama << endl;
    cout << "Gaji pokok : Rp " << gaji_pokok << endl;
    cout << "Honor yang diterima : " << endl;
    cout << "Tunjangan Jabatan : Rp " << t_jabatan << endl;
    cout << "Tunjangan Pendidikan : Rp " << t_pendidikan << endl;
    cout << "Honor Lembur : Rp " << h_lembur << endl;
    cout << "_________________________+" << endl;
    cout << "Total Gaji : Rp " << total << endl;

    getch ();
}