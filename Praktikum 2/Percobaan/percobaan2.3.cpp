#include <iostream>
#include <conio.h> 
using namespace std; 
int main() { 
    int gol; 
    cout << "Masukkan nilai gol : "; cin >> gol;
    if(gol == 1) { 
        cout << "Gaji = 100"; 
    } else if(gol == 2) { 
        cout << "Gaji = 200 "; 
    } else if(gol == 3) { 
        cout << "Gaji = 300"; 
    } else{ 
        cout << "Golongan Salah"; 
    }
    getch ();
}