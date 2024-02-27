#include<iostream>
#include <conio.h>
#include <math.h>
#include<stdlib.h>
#include <string.h>
using namespace std;
int main() {
    char kata[30];
    float angka, a, b;
    cout<<"Masukan Sembarang angka pecahan (misal : 12.125) = ";
    cin>>kata;
    angka = atof(kata);
    a = angka + 5;
    cout<<"Hasil Perubahan float ditambah dengan 5 = "<<a<<endl;
    angka = atoi(kata);
    a = angka + 5;
    cout<<"Hasil Perubahan int ditambah dengan 5 = "<<a<<endl;
    cout<<"Masukan angka yang cukup besar (misal : 1000000) = ";
    cin>>kata;
    angka = atol(kata);
    a = angka + 5;
    cout<<"Hasil Perubahan longint ditambah dengan 5 = "<<a<<endl;
    cout<<"Masukan sembarang kata dengan huruf besar = ";
    cin>>kata;
    strlwr(kata);
    cout<<"Hasil Perubahan = "<<kata<<endl;
    cout<<"Masukan sembarang kata dengan huruf kecil = ";
    cin>>kata;
    strupr(kata);
    cout<<"Hasil Perubahan = "<<kata<<endl;
    getch();
}