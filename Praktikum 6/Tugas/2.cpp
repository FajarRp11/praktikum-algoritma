#include <iostream>
#include <conio.h>
using namespace std;

void tukarNilai(int& A, int& B) {
    int temp = A;
    A = B;
    B = temp;
}

int main () {
    int A, B;

    cout << "Masukan nilai A : ";
    cin >> A;
    cout << "Masukan nilai B : ";
    cin >> B;

    cout << "Nilai A sebelum ditukar : " << A << endl;
    cout << "Nilai B sebelum ditukar : " << B << endl;

    tukarNilai(A, B);

    cout << "Nilai A setelah ditukar : " << A << endl; 
    cout << "Nilai B setelah ditukar : " << B << endl; 

    getch();
}