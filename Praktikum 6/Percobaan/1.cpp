#include<iostream>
#include <conio.h>
using namespace std;

void ucapan() { //fungsi void atau prosedur
    cout<<"Program Nilai Kuadrat"<<endl;
    cout<<"---------------------"<<endl;
}

int pangkat1(int x) { //fungsi
    return ( x * x);
}

int pangkat2(int x); // deklarasi fungsi di bawah main
int main() {
    ucapan();
    int n;
    cout<<"Input x : "; cin >> n; cout<<endl;
    cout<<"Pangkat1 = "<< pangkat1(n) << endl;
    cout<<"Pangkat2 = "<< pangkat2(n) << endl;
    getch();
}
int pangkat2(int x) { // definisi fungsi di bawah main
    return ( x * x);
}