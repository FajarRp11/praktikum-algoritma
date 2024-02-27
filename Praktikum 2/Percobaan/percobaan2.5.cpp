#include <iostream> 
#include <conio.h>
using namespace std;
int main() {
    int gol;
    cout << "Masukkan nilai gol : "; cin >> gol;
    switch (gol) {
        case 1 : 
        cout<<"Gaji = 100";
        break;
        case 2 : 
        cout<<"Gaji = 200 ";
        break;
        case 3 : 
        cout<<"Gaji = 300";
        break;
        default : 
        cout<<"Golongan Salah";
        break;
    }
    getch ();
}