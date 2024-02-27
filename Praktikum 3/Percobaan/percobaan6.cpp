#include <iostream>
#include <conio.h>

using namespace std; 
main(){
for (int i=1; i<=3; i++) {
for (int j=1; j<=5; j++) {
cout << " * ";
}
cout << endl;
}
cout << endl;
int i=1;
while(i<=3) {
int j=1;
while (j<=5 ) {
cout << " * ";
j++;
}
cout << endl;
i++;
}
getch ();
}