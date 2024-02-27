#include <iostream>
#include <conio.h>
using namespace std;

int main () {
    struct dataTanggal {
        int tanggal;
        string bulan;
        int tahun;
    };

    dataTanggal tgl11, tgl12;

    cout << "Masukan data tanggal 1" << endl;
    cout << "\tTanggal : ";
    cin >> tgl11.tanggal;
    cout << "\tBulan : ";
    cin >> tgl11.bulan;
    cout << "\tTahun : ";
    cin >> tgl11.tahun;

    cout << "Masukan data tanggal 2" << endl;
    cout << "\tTanggal : ";
    cin >> tgl12.tanggal;
    cout << "\tBulan : ";
    cin >> tgl12.bulan;
    cout << "\tTahun : ";
    cin >> tgl12.tahun;

    cout << "Tanggal 1 : " << tgl11.tanggal << " " << tgl11.bulan << " " << tgl11.tahun << endl; 
    cout << "Tanggal 2 : " << tgl12.tanggal << " " << tgl12.bulan << " " << tgl12.tahun << endl; 

    getch();
}