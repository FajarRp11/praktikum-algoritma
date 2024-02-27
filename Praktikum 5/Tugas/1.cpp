#include <iostream>
#include <conio.h>
using namespace std;

int main () {
    struct koordinat {
        int absis;
        int ordinat;
    } A, B, C, D, T, TX, TY;

    A.absis = 2;
    A.ordinat = 1;
    cout << "Titik A : (" << A.absis << "," << A.ordinat << ")" << endl;
    B.absis = 6;
    B.ordinat = 3;
    cout << "Titik B : (" << B.absis << "," << B.ordinat << ")" << endl << endl;

    cout << "Titik C merupakan hasil pencerminan Titik A terhadap Sumbu X" << endl;
    C.absis = A.absis;
    C.ordinat = A.ordinat * -1;
    cout << "Titik C : (" << C.absis << "," << C.ordinat << ")" << endl;
    cout << "Titik D merupakan hasil pencerminan Titik A terhadap Sumbu Y" << endl;
    D.absis = A.absis * -1;
    D.ordinat = A.ordinat;
    cout << "Titik D : (" << D.absis << "," << D.ordinat << ")" << endl << endl;

    cout << "Titik Tengah (T) dari 2 buah koordinat A dan B" << endl;
    T.absis = (A.absis + B.absis)/2;
    T.ordinat = (A.ordinat + B.ordinat)/2;
    cout << "Titik T : (" << T.absis << "," << T.ordinat << ")" << endl << endl;

    cout << "Pencerminan Titik T terhadap Sumbu X" << endl;
    TX.absis = T.absis;
    TX.ordinat = T.ordinat * -1;
    cout << "Pencerminan Titik T terhadap Sumbu X adalah : (" << TX.absis << "," << TX.ordinat << ")" << endl;
    cout << "Pencerminan Titik T terhadap Sumbu Y" << endl;
    TY.absis = T.absis * -1;
    TY.ordinat = T.ordinat;
    cout << "Pencerminan Titik T terhadap Sumbu Y adalah : (" << TY.absis << "," << TY.ordinat << ")" << endl;
    getch();
}