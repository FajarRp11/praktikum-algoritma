#include <iostream>
#include <conio.h>
using namespace std;

void inputData(float& panjang, float& lebar) {
    cout << "Masukan Panjang : ";
    cin >> panjang;
    cout << "Masukan Lebar : ";
    cin >> lebar;
}

float hitungLuas(int panjang, int lebar) {
    float luas = panjang * lebar;
    return luas;
}

void outputData(float luas) {
    cout << "Luas Persegi Panjang adalah " << luas << endl;
}

int main () {
    float panjang, lebar;

    inputData(panjang, lebar);

    float luas = hitungLuas(panjang, lebar);

    outputData(luas);
    getch();
}