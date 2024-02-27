//Soal: Buatlah program untuk menghitung harga total suatu barang, dimana jumlah barangnya 5, harga per unit 5203.02

#include <iostream>
#include <conio.h>

using namespace std;

int main () {
    float harga, jumlah, total;

    harga = 5203.02;
    jumlah = 5;

    total = harga * jumlah;

    cout <<"Harga total dari barang tersebut adalah " << total << endl;

    getch ();
}