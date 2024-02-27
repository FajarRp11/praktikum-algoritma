#include <iostream>
#include <conio.h>
using namespace std;
int binarySearch(int myarray[], int beg, int end, int key) {
    int mid;
    if(end >= beg) {
        mid = (beg + end)/2;
        if(myarray[mid] == key) {
            return mid+1;
        } else if(myarray[mid] < key) {
            return binarySearch(myarray,mid+1,end,key);
        } else {
            return binarySearch(myarray,beg,mid-1,key);
        }
    }
    return -1;
}
int main () {
    int myarray[10] = {5,8,10,13,21,23,25,43,54,75};
    int key, location=-1;
    cout<<"List array :"<<endl;
    for(int i=0;i<10;i++ ){
        cout<<myarray[i]<<" ";
    }
    cout<<endl;
    cout<<"Masukkan angka yang akan dicari:"; cin>>key;
    location = binarySearch(myarray, 0, 9, key);
    if(location != -1) {
        cout<<"Angka " << key << " ditemukan pada posisi "<<location;
    }
    else {
        cout<<"Angka tidak ditemukan";
    }
    getch();
}