#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int countLetter(string str) {
    int len = str.length();
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z'){
            count++;
        }
    }
    return count;
}

int countVowel(string str) {
    int len = str.length();
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e' || str[i] == 'o') {
            count++;
        }
    }
    return count;
}

int main () {
    char kalimat[100];
    cout << "Masukan kalimat : ";
    cin.get(kalimat, 100);
    cout << endl;

    cout << "A. Banyak Karakter Termasuk Spasi : " << strlen(kalimat) << endl;
    cout << "B. Banyak Karakter Tanpa Spasi : " << countLetter(kalimat) << endl;
    cout << "C. Banyak Huruf Vokal : " << countVowel(kalimat) << endl;
    cout << "D. Banyak Huruf Konsonan : " << countLetter(kalimat) - countVowel(kalimat ) << endl;

    getch();
}