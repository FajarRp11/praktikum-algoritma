#include <iostream>
#include <conio.h>
using namespace std; 
main(){
int i=1, n, sigma = 0;
cout << "Masukkan bilangan integer positif : "; cin >> n;
while (1) {
if (i > n) break; // loop berhenti disini ketika i>n
cout << i << endl;
i++;
}
getch();
}