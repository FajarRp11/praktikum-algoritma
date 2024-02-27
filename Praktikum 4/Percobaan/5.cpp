#include<iostream>
#include <conio.h>
using namespace std;
int main() {
int nBaris, nKolom;
cout << "Banyak baris : "; cin >> nBaris; cout<<endl;
cout << "Banyak kolom : "; cin >> nKolom; cout<<endl;
int matriks[nBaris][nKolom];
for (int i=0; i < nBaris; i++) {
for (int j=0; j < nKolom; j++) {
cout<<"Data ke-["<<i+1<<","<<j+1 <<"] : ";
cin >> matriks[i][j];
}
}
cout << "\nPencetakan Matriks :"<<endl;
for (int i=0; i < nBaris; i++) {
for (int j=0; j < nKolom; j++) {
cout << matriks[i][j] << " ";
}
cout << endl;
}
getch();
}