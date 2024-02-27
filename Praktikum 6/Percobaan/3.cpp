#include<iostream>
#include<conio.h>
using namespace std;
void tambah(int &c, int &d)
{
c+=7;
d+=5;
cout<<endl;
cout<<"\n Nilai di Akhir Fungsi Tambah()";
cout<<"\n c = "<<c<<" d = "<<d;
}
int main() {
int a, b;
a = 4;
b = 6;
cout<<" Nilai Sebelum Pemanggilan Fungsi";
cout<<"\n a = "<<a<<" b = "<<b;
tambah(a,b);
cout<<endl;
cout<<"\n Nilai Setelah Pemanggilan Fungsi";
cout<<"\n a = "<<a<<" b = "<<b;
getch();
}