#include <iostream>
#include <conio.h>

using namespace std;

int main () {
    int Quiz, UTS, UAS;
    float nilai_akhir;
    char huruf_mutu;

    cout << "Masukan nilai quiz : ";
    cin >> Quiz;

    cout << "Masukan nilai UTS : ";
    cin >> UTS;

    cout << "masukan nilai UAS : ";
    cin >> UAS;

    nilai_akhir = 0.25 * Quiz + 0.35 * UTS + 0.4 * UAS;

    if (nilai_akhir >= 0 && nilai_akhir < 45) {
        huruf_mutu = 'E';
    } else if (nilai_akhir >= 45 && nilai_akhir < 55) {
        huruf_mutu = 'D';
    } else if (nilai_akhir >= 55 && nilai_akhir < 68) {
        huruf_mutu = 'C';
    } else if (nilai_akhir >= 68 && nilai_akhir < 80) {
        huruf_mutu = 'B';
    } else if (nilai_akhir >= 80 && nilai_akhir <= 100) {
        huruf_mutu = 'A';
    }
    
    cout << "Nilai Akhir adalah " << nilai_akhir << endl;
    cout << "Huruf mutu : " << huruf_mutu << endl;

    if (nilai_akhir >= 60) {
        cout << "Mahasiswa dinyatakan lulus" << endl;
    } else {
        cout << "Mahasiswa dinyatakan tidak lulus" << endl;
    }

    getch ();
}