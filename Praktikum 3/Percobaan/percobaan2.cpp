#include <iostream>
#include <conio.h>
using namespace std; 
main(){
int i=1, n, sigma = 0;
cout << "Masukkan bilangan integer positif : "; cin >> n;
while (i<=n) {
sigma += i;
i++;
}
cout << "Jumlah dari "<< n <<" bilangan pertama adalah : "<< sigma << endl;
getch();
}