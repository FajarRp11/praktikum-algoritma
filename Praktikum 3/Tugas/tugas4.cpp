#include <iostream>
#include <conio.h>
using namespace std;

int main () {

    for (int i = 1; i <= 10; i++) {
        cout << "Tabel perkalian ke-" << i << endl;
        for (int j = 1; j <= 10; j++) {
            int hasil = i * j;
            cout << i << " x " << j << " = " << hasil << endl;
        }
        cout << endl;
    }
    getch ();
}