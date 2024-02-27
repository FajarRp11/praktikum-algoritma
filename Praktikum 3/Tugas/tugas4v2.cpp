#include <iostream>
#include <conio.h>
using namespace std;

int main () {
    cout << "\t\t\tTabel perkalian 1 - 10" << endl;
    cout << "\t\t\t_________________________" << endl;

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 5; j++) {
            int hasil1 = i * j;
            
            cout << i << " x " << j << " = " << hasil1;
            cout << "\t";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= 10; i++) {
        for (int j = 6; j <= 10; j++) {
            int hasil2 = i * j;
            cout << i << " x " << j << " = " << hasil2;
            cout << "\t";

        }
        cout << endl;
    }

    getch ();
}