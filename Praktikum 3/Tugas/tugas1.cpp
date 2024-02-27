#include <iostream>
#include <conio.h>

using namespace std;

int main () {
    //Pola pertama 
    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 2; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    //Pola kedua 
    for (int i = 3; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= 2; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    getch ();
}