#include <iostream>
#include <conio.h>
using namespace std;

int main () {
    int n, key, jumlah = 0;
    cout << "Masukan Jumlah Data : ";
    cin >> n;

    int data[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukan Data ke-" << i + 1 << " : ";
        cin >> data[i];
    }
    cout << "List Array : ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    cout << "Masukan Data yang Dicari : ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (data[i] == key) {
            jumlah = jumlah+1;
        }
    }
    cout << "Jumlah Bilangan " << key << " Dalam Array Adalah " << jumlah << endl;

    getch();
}