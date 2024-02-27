#include <iostream>
#include <conio.h>
using namespace std; 
main(){
for(int i=0; i<4; i++){
cout << i;
}
cout<<endl;
for(int i=3;i>0;i--){
cout<<i;
}
cout << endl;
cout << endl;
int n, sigma = 0;
cout << "Masukkan bilangan integer positif : "; cin >> n;
for (int i = 1; i <= n; i++) {
sigma += i;
}
cout << "Jumlah dari " << n <<" bilangan pertama adalah : " << sigma << endl;
getch();
}