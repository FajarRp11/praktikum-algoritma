#include<iostream>
#include <conio.h>
using namespace std;
int main() {
int n;
cout<<"Banyak data : "; cin>>n;
int data[n];
for (int i=0; i<n; i++) {
cout<<"Data "<<i+1<<" : "; cin>>data[i];
}
cout<<endl;
for(int i=0; i<n; i++) {
cout<<"Data"<<i+1<<" = "<<data[i]<<endl;
}
getch();
}
