//Soal: Buatlah program untuk penggunaan operasi aritmatika yaitu penjumlahan, pembagian, perkalian, dan pengurangan dengan variabel yang diinputkan

#include <iostream>
#include <conio.h>

using namespace std;

int main () {
    float A, B, hasil;
    char aritmatika;

    cout << "Masukan bilangan pertama: ";
    cin >> A;

    cout << "Pilih operator: ";
    cin >> aritmatika;

    cout << "Masukan bilangan kedua: ";
    cin >> B;

    if (aritmatika == '+') {
        hasil = A + B; 
    } else if (aritmatika == '-') {
        hasil = A - B;
    } else if (aritmatika == '*') {
        hasil = A * B;
    } else {
        hasil = A / B;
    }
    
    cout << "Hasil operasi dari " << A << " " << aritmatika << " " << B << " adalah 9" << hasil << endl;


    getch ();
}