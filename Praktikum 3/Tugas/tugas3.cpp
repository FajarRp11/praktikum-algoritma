#include <iostream>
#include <conio.h>
using namespace std;

int main () {
    int bil, jml_bilGenap;

    for (int i = 1; i <= 10; i++) {
        cout << "Masukan bilangan ke-" << i << ": ";
        cin >>bil;

        if (bil % 2 == 0) {
            jml_bilGenap++;
        }
    }
    
    cout << "JUmlah bilangan yang genap saja adalah " << jml_bilGenap << endl;
    
    getch ();
}