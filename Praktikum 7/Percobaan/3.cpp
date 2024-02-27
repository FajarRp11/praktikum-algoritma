#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int myarray[10] = {21,43,23,54,75,13,5,8,25,10};
    int key,loc;
    cout<<"List array:"<<endl;
    for(int i=0;i<10;i++){
        cout<<myarray[i]<<" ";
    }
    cout<<endl;

    cout<<"Masukkan angka yang dicari : "; cin>>key;
    for (int i = 0; i< 10; i++) {
        if(myarray[i] == key) {
            loc = i+1;
            break;
        } else {
            loc = 0;
        }
    }
    if(loc != 0) {
        cout<<"Angka ditemukan pada posisi ke "<<loc<<" pada array";
    } else {
        cout<<"Angka tidak ditemukan pada array";
    }
    getch();
}