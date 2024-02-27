#include<iostream>
#include<conio.h>
using namespace std;
int tambah(int m, int n) {
    int a,b;
    a= m+5;
    b= n+7;
    cout<<"\n\n Nilai variabel lokal di dalam Fungsi Tambah( )";
    cout<<"\n a = "<<a<<" b = "<<b;
    cout<<endl;
    return m+n;
}
int main() {
    int a, b;
    a = 5;
    b = 9;
    cout<<"Nilai Sebelum Fungsi Digunakan ";
    cout<<"\na = "<<a<<" b = "<<b;
    cout<<"\n Hasil return dari Fungsi Tambah( ) = "<<tambah(a,b)<<endl;
    cout<<"\nNilai Setelah Fungsi Digunakan";
    cout<<"\na = "<<a<<" b = "<<b;
    getch();
}