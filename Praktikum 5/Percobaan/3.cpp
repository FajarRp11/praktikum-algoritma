#include <iostream>
#include <conio.h>
#include <cstring> 
using namespace std;
struct books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
int main() {
    cout<<"Program Daftar Nilai Mahasiswa"<<endl;
    cout<<"-------------------------------------------"<<endl;
    struct books book[5]; //dapat juga menggunakan tipe array
    strcpy( book[1].title, "Learn C++ Programming");
    strcpy( book[1].author, "Chand Miyan"); 
    strcpy( book[1].subject, "C++ Programming");
    book[1].book_id = 6495407;
    book[2] = book[1];
    cout<<"Buku ke-1 :"<<endl; 
    cout << "\tTitle : " << book[1].title <<endl;
    cout << "\tAuthor : " << book[1].author <<endl;
    cout << "\tSubject : " << book[1].subject <<endl;
    cout << "\tID : " << book[1].book_id <<endl;
    cout<<"Buku ke-2 :"<<endl; 
    cout << "\tTitle : " << book[2].title <<endl;
    cout << "\tAuthor : " << book[2].author <<endl;
    cout << "\tSubject : " << book[2].subject <<endl;
    cout << "\tID : " << book[2].book_id <<endl;
    getch();
}