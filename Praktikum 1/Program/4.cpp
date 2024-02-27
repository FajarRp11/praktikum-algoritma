//Soal: Diketahui variabel A=10 dan B=50. Buatlah program untuk menukarkan letak dari kedua nilai variabel tersebut, sehingga sewaktu dicetak nilai A=50 dan B=10

#include <iostream>
#include <conio.h>

using namespace std;

int main () {
    int A, B, temp;

    A = 10;
    B = 50;

    cout << "Nilai A adalah " << A << " dan nilai B adalah " << B << endl;

    temp = A;
    A = B;
    B = temp;

    cout << "Nilai A setelah ditukar adalah " << A << " dan nilai B setelah ditukar adalah " << B << endl;

    getch ();
}