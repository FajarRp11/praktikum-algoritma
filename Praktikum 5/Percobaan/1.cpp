#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    struct car {
        string brand;
        string model;
        int year;
    } myCar1, myCar2;

    myCar1.brand = "BMW";
    myCar1.model = "M5";
    myCar1.year = 1985;

    myCar2.brand = "Koenigsegg";
    myCar2.model = "Jesko";
    myCar2.year = 2022;

    cout << "Car 1 :" << endl;
    cout << "\tBrand : " << myCar1.brand << endl;
    cout << "\tModel : " << myCar1.model << endl;
    cout << "\tYear : \t" << myCar1.year << endl;

    cout << "Car 2 :" << endl;
    cout << "\tBrand : " << myCar2.brand << endl;
    cout << "\tModel : " << myCar2.model << endl;
    cout << "\tYear : " << myCar2.year << endl;

    getch();
}