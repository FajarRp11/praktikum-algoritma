#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    char str1[100] = {'K','o','t','a',' ','P','a','d','a','n','g'};
    cout << "String yang tersimpan : " << str1 << endl;
    char str2[100] = "Praktikum Algoritma";
    cout << "String yang tersimpan : " << str2 << endl;
    char str3[100];
    cout << "Input string 2: "; //masukkan lebih dari 1 kata
    cin.get(str3, 100);
    cout << "String yang tersimpan : " << str3 << endl;
    char str4[100];
    cout << "Input string 1: "; //masukkan lebih dari 1 kata 
    cin >> str4;
    cout << "String yang tersimpan : " << str4 << ", hanya kata pertama saja yang tersimpan." << endl;
    getch();
}