// Buatlah program untuk menseleksi suatu bilangan dengan ketentuan sebagai berikut :

#include <iostream>
#include <conio.h>

using namespace std;

int main () {
    int x;

    cout << "Masukan bilangan : ";
    cin >> x;

    if (x >= 0 && x < 30) {
        cout << "Nilai rendah" << endl;
    } else if (x >= 30 && x < 60) {
        cout << "Nilai sedang" << endl;
    } else if (x >= 60 && x <= 100) {
        cout << "Nilai tinggi" << endl;
    } else {
        cout << "Nilai tidak valid" << endl;
    }

    getch ();
}