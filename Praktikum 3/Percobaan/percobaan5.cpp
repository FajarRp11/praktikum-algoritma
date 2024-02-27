#include <iostream>
#include <conio.h>
using namespace std; 
main(){
int n;
for (; ;) {
cout << "Masukkan integer : "; cin >> n;
if (n % 2 ==0) continue;
else if (n % 2 > 0) break;
}
cout << "\tAkhir loop" << endl;
getch ();
}
