#include <iostream> 
#include <conio.h>
using namespace std;
int main() {
    int a,b,c,max;
    cout << "Masukkan 3 buah bilangan : ";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a > b) {
        if (a > c) 
            max = a; //a>b and a>c
        else 
            max = c; //c>=a > b
    } else {
        if (b > c) 
            max = b; //b>=a and b>c
        else 
            max = c; // c>= b >=a
    }
    cout<<"Maksimum adalah : "<<max << endl;
    getch ();
}