#include <iostream>
#include <conio.h>
using namespace std; 
int main(){
    int n,d;
    cout << "Masukkan bil. Pertama : ";
    cin >> n;
    cout << "Masukkan bil. Kedua : ";
    cin >> d;
    
    if(n % d == 0){
        cout << n << " habis dibagi oleh " << d <<endl;
    }
    getch();
}