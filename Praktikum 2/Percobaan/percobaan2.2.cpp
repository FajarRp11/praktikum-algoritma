#include <iostream> 
#include <conio.h>
using namespace std; 
int main(){ 
    int i;
    cout << "Masukkan nilai i : "; cin >> i;
    if(i%2==0) { 
        cout<<"i = " << i << " adalah bilangan genap"; 
    } else { 
        cout<<"i = "<< i <<" adalah bilangan ganjil"; 
    } 
    getch ();
}