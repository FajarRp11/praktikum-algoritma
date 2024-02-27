#include<iostream>
#include <conio.h>
using namespace std;
int main() {
int i, j;
int data[2][3] = {{2, 4, 1}, {5, 3, 7}}; //inisialisasi
for(i=0;i<2;i++) {
for(j=0;j<3;j++) {
cout<<data[i][j];
cout<<" ";
}
cout<<endl;
}
getch();
}
