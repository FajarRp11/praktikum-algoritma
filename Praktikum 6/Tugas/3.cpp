#include <iostream>
#include <conio.h>
using namespace std;

double hitungDiskon(double pembelian) {
    double diskon = 0.0;

    if (pembelian < 1000000) {
        diskon = 0.0 * pembelian;
    } else if (pembelian >= 1000000 && pembelian <= 5000000) {
        diskon = 0.2 * pembelian;
    } else if (pembelian > 5000000) {
        diskon = 0.35 * pembelian;
    }
    return diskon;
}

int main () {
    double pembelian;

    cout << "Program Hitung Potongan" << endl;
    cout << "Besar pembelian barang Rp. ";
    cin >> pembelian;

    hitungDiskon(pembelian);
    cout.precision(15);
    cout << "Besar diskon yang diberikan Rp. " << hitungDiskon(pembelian) << endl;
    cout << "Besar harga yang harus dibayarkan Rp. " << pembelian - hitungDiskon(pembelian);
    getch();

}