#include <iostream>
#include <conio.h>
using namespace std;

int selectionSort(int [], int, int);

int main () {
    int n, Sort, temp, post;

    cout << "Masukan Jumlah Data : ";
    cin >> n;
    cout << endl;
    int data[n];

    for (int i = 0; i < n; i++) {
        cout << "Masukan Data ke-" << i + 1 << " : ";
        cin >> data[i];
    }

    cout << endl;
    cout << "Ketik 1 untuk Memilih Bubble Sort" << endl;
    cout << "Ketik 2 untuk Memilih Selection Sort" << endl;
    cout << "Pilih Metode Sorting : ";
    cin >> Sort;
    cout << endl;

    if (Sort == 1) {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (data[j] < data[i]) {
                    temp = data[i];
                    data[i] = data[j];
                    data[j] = temp;
                }
            }
        }
        cout << "Data setelah diurutkan menggunakan metode Bubble Sort : ";
        for (int i = n - 1; i >= 0; i--) {
            cout << data[i] << " ";
        }
        cout << endl;
    } else if(Sort == 2) {
        for (int i = 0; i < n; i++) {
            post = selectionSort(data, n, i);
            temp = data[i];
            data[i] = data[post];
            data[post] = temp;
        }
        cout << "Data setelah diurutkan menggunakan metode Selection Sort : ";
        for (int i = n - 1; i >= 0; i--) {
            cout << data[i] << " ";
        }
        
    }
    getch();
}

int selectionSort(int data[], int n, int i) {
    int smallElement, position;
    smallElement = data[i];
    position = i;
    for (int j = i + 1; j < n; j++) {
        if(data[j] < smallElement) {
            smallElement = data[j];
            position = j;
        }
    }
    return position;
}