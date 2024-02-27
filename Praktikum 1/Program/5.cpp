//Soal: Terdapat sebuah program yang dapat membaca 3 buah bilangan bulat yang mewakili tiga buah tahanan dalam Ohm: R1, R2 dan R3. Kemudian hitung dan tuliskanlah tahanan total yang dihasilkan jika ketiganya dipasang seri dan parallel!

#include <iostream>
#include <conio.h>

using namespace std;

int main () {
    int R1, R2, R3;
    float R_Seri, R_Paralel;

    cout << "Masukan R1: ";
    cin >> R1;

    cout << "Masukan R2: ";
    cin >> R2;

    cout << "Masukan R3: ";
    cin >> R3;

    //Menghitung total rangkaian seri
    R_Seri = R1 + R2 + R3;

    //Menghitung total rangkaian paralel
    R_Paralel = 1/(1/(float)R1 + 1/(float)R2 + 1/(float)R3);

    //Menampilkan total rangkaian seri dan rangkaian paralel

    cout << "Total tahanan jika dipasang secara seri adalah " << R_Seri << endl;
    cout << "Total tahanan jika dipasang secara Paralel adalah " << R_Paralel << endl;

    getch ();
}