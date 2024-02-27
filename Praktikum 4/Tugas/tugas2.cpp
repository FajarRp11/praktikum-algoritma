#include <iostream>
#include <conio.h>
using namespace std;

int main () {
    int nBaris, nKolom;

    cout << "Masukan jumlah baris : ";
    cin >> nBaris;
    cout << "Masukan jumlah kolom : ";
    cin >> nKolom;
    cout << endl;

    int MatriksA[nBaris][nKolom], MatriksB[nBaris][nKolom], MatriksC[nBaris][nKolom];

    cout << "Masukan data Matriks A" << endl;
    for (int i = 0; i < nBaris; i++) {
        for (int j = 0; j < nKolom; j++) {
            cout << "Masukan data ke-[" << i + 1 << "," << j + 1 << "] : ";
            cin >> MatriksA[i][j];
        }
    
    }
    cout << endl;

    cout << "Matriks A" << endl;
    for (int i = 0; i < nBaris; i++) {
        for (int j = 0; j < nKolom; j++) {
            cout << MatriksA[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Masukan data Matriks B" << endl;
    for (int i = 0; i < nBaris; i++) {
        for (int j = 0; j < nKolom; j++) {
            cout << "Masukan data ke-[" << i + 1 << ","<< j + 1 << "] : ";
            cin >> MatriksB[i][j];
        }
    }

    cout << endl;

    cout << "Matriks B" << endl;
    for (int i = 0; i < nBaris; i++) {
        for (int j = 0; j < nKolom; j++) {
            cout << MatriksB[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Matriks C = Matriks A + Matriks B" << endl << endl;
    cout << "Matriks C" << endl;

    for (int i = 0; i < nBaris; i++) {
        for (int j = 0; j < nKolom; j++) {
            MatriksC[i][j] = MatriksA[i][j] + MatriksB[i][j];
            cout << MatriksC[i][j] << " ";
        }
        cout << endl;
    }
    getch();
}