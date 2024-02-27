#include <iostream>
#include <conio.h>
using namespace std;

int main () {
    int n;

    cout << "Masukan jumlah bilangan : ";
    cin >> n;

    int data[n];

    for (int i = 0; i < n; i++) {
        cout << "Masukan data ke-" << i + 1 << " : ";
        cin >> data[i];
    }

    int maks = data[0];
    int min = data[0];
    float total = data[0];

    for (int i = 1; i < n; i++) {
        if (data[i] > maks) {
            maks = data[i];
        }
        if (data[i] < min) {
            min = data[i];
        }

        total += data[i];
    }

    float rataRata = total/n;

    cout << "Nilai Maksimum : " << maks << endl;
    cout << "Nilai Minimum : " << min << endl;
    cout << "Rata-rata : " << rataRata << endl;

    getch();
}