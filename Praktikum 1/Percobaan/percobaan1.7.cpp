#include <iostream>
#include <conio.h>

using namespace std;

int main () {
 // a = 5(00000101), b = 9(00001001)
    int a = 5, b = 9;

    cout <<"a = " << a <<","<< " b = " << b << endl;
    cout <<"a & b = " << (a & b) << endl; // Hasilnya 00000001
    cout <<"a | b = " << (a | b) << endl; // Hasilnya 00001101
    cout <<"a ^ b = " << (a ^ b) << endl; // Hasilnya 00001100
    cout <<"~(" << a << ") = " << (~a) << endl; // Hasilnya 11111010
    cout <<"b << 1" <<" = "<< (b << 1) << endl; // Hasilnya 00010010
    cout <<"b >> 1 "<<"= " << (b >> 1) << endl; // Hasilnya 00000100

    getch ();
}
