#include <iostream>
#include <conio.h>
#include <string>
#include <math.h>
#include <stdlib.h>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

float kali(float a, float b) {
    return a * b;
}

float bagi(float a, float b) {
    return a / b;
}

int mod(int a, int b) {
    return a % b;
}

int main () {
    char Kalimat1[100] = "35.7";
    char Kalimat2[100] = "12.3";
    string menu;
    char ulang;

    cout << "Kalimat 1 = " << Kalimat1 << endl;
    cout << "Kalimat 2 = " << Kalimat2 << endl;
    cout << endl;

    do {
        cout << "Pilih Menu [tambah/kurang/kali/bagi/modulus] : ";
        cin >> menu;

        if (menu == "tambah") {
            int a = atoi(Kalimat1);
            int b = atoi(Kalimat2);
            int hasil = tambah(a, b);
            cout << "Hasil penjumlahan antara " << Kalimat1 << " dengan " << Kalimat2 << " adalah " << hasil << endl << endl;
        } else if (menu == "kurang") {
            int a = atoi(Kalimat1);
            int b = atoi(Kalimat2);
            int hasil = kurang(a, b);
            cout << "Hasil pengurangan antara " << Kalimat1 << " dengan " << Kalimat2 << " adalah " << hasil << endl << endl;
        } else if (menu == "bagi") {
            float a = atof(Kalimat1);
            float b = atof(Kalimat2);
            float hasil = bagi(a, b);
            cout << "Hasil pembagian antara " << Kalimat1 << " dengan " << Kalimat2 << " adalah " << hasil << endl << endl;
        } else if (menu == "kali") {
            float a = atof(Kalimat1);
            float b = atof(Kalimat2);
            float hasil = kali(a, b);
            cout << "Hasil perkalian antara " << Kalimat1 << " dengan " << Kalimat2 << " adalah " << hasil << endl << endl;
        } else if (menu == "modulus") {
            int a = atoi(Kalimat1);
            int b = atoi(Kalimat2);
            int hasil = mod(a, b);
            cout << "Hasil modulus antara " << Kalimat1 << " dengan " << Kalimat2 << " adalah " << hasil << endl << endl;
        }
        cout << "Ingin Keluar [Y/N] : ";
        cin >> ulang;
    } while (ulang == 'n' || ulang == 'N');
    getch();
}