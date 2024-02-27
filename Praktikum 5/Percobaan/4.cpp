#include<iostream>
#include <conio.h>
using namespace std;

int main() {
    struct Tgl_Lahir {
        int Tanggal;
        int Bulan;
        int Tahun;
    };
    struct Mahasiswa {
        char Nim[100];
        char Nama[100];
        Tgl_Lahir Lahir;
    };

    Mahasiswa Mhs;
    cout<<"NIM : "; cin.getline(Mhs.Nim,100);
    cout<<"Nama : "; cin.getline(Mhs.Nama,100);
    cout<<"Tanggal Lahir :\n";
    cout<<"\tTanggal : "; cin>>Mhs.Lahir.Tanggal;
    cout<<"\tBulan : "; cin>>Mhs.Lahir.Bulan;
    cout<<"\tTahun : "; cin>>Mhs.Lahir.Tahun;
    cout<<"\n\nMencetak Kembali Nilai Anggota\n\n";
    cout<<"NIM : "<<Mhs.Nim;
    cout<<"\nNama : "<<Mhs.Nama;
    cout<<"\nTanggal Lahir : "<<Mhs.Lahir.Tanggal<<"-";
    cout<<Mhs.Lahir.Bulan<<"-"<<Mhs.Lahir.Tahun;
    getch();
}
