#include<iostream>
#include <conio.h>
using namespace std;
int main (){
char kalimat [100];
cout << "Siapa nama anda? ";
cin.getline (kalimat,100);
cout << "Halo " << kalimat << ".\n";
cout << "Apa makanan favorit anda? ";
cin.getline (kalimat,100);
cout << "Saya suka " << kalimat << " juga.\n";
getch();
}
