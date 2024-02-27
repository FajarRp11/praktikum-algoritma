#include <iostream>
#include <conio.h>
#define phi 3.14

using namespace std;

int main(){
float jari_jari, luas, keliling;
jari_jari = 7.0;
luas = phi * jari_jari * jari_jari;
keliling = 2 * phi * jari_jari;
cout << " Luas Lingkaran = " << luas <<endl;
cout << " Keliling Lingkaran = " << keliling;
getch ();
}