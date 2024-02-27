#include <iostream>
#include <conio.h>

using namespace std;
int main () {
    int m=44, n = 66;
    cout <<"m = "<<m<<", n = "<<n<<endl;
    ++m;
    --n;
    cout <<"m = "<<m<<", n = "<<n<<endl;
    m++;
    n--;
    cout <<"m = "<<m<<", n = "<<n<<endl;
    cout << endl;
    m=66;
    n = ++m;
    cout <<"m = "<<m<<", n = "<<n<<endl;
    n=m++;
    cout <<"m = "<<m<<", n = "<<n<<endl;
    cout <<"m = "<<m++<<endl;
    cout <<"m = "<<m<<endl;
    cout <<"m = "<<++m<<endl;
    cout <<"m = "<<m<<endl;

    getch ();
}