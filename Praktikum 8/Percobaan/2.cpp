#include<iostream>
#include <conio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main() {
    char a1[100] = "Kota";
    char a2[100] = "Padang";
    char a3[100] = "PADANG";
    char a4[100] = "Padang";
    strcat(a1, a2);
    cout<<"Hasil Penggabungannya "<<a1<<endl;;
    cout<<"Hasil Perbandingan "<<a2<<" dan "<<a3<<"->";
    cout<<strcmp(a2,a3)<<endl;
    cout<<"Hasil Perbandingan "<<a2<<" dan "<<a4<<"->";
    cout<<strcmp(a2,a4)<<endl;
    cout<<"Hasil Perbandingan "<<a3<<" dan "<<a2<<"->";
    cout<<strcmp(a3,a2)<<endl;
    strcpy(a2, a3);
    cout<<"Isi variabel a2 sekarang = "<<a2<<endl;
    cout<<"Panjang kata "<<a1<<" adalah : "<<strlen(a1)<<endl;
    strrev(a1);
    cout<<"Hasil pembalikkan = "<<a1;
    getch();
}
