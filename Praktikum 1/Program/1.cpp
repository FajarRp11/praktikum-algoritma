//Soal: Buatlah program untuk menghitung luas segitiga. Data masukkan dibaca dari piranti masukkan dan luas bangun ditampilkan sebagai keluaran.

#include <iostream>
#include <conio.h>

using namespace std;

int main () {
    float tinggi, alas, luas;

    cout << "Masukan tinggi: ";
    cin >> tinggi;

    cout << "Masukan panjang alas: ";
    cin >> alas;

    luas = 0.5 * tinggi * alas;

    cout << "Luas segitiga adalah " << luas << endl;

    getch ();

}