#include<iostream>
#include <conio.h>
#include<string.h>
using namespace std;

int main() {
    char kata[100];

    cout << "Masukan Kalimat : ";
    cin.get(kata, 100);
    cout << endl;

    cout << "Kalimat " << kata << " ";
    if (kata == strrev(kata)) {
        cout << "Termasuk Palindrome!";
    } else {
        cout << "Bukan Palindrome!";
    }

    getch();
}