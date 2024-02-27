#include <iostream>
#include <conio.h>
using namespace std;
double hitungTarif(char kodeBuku, int banyakPinjam) {
    double tarif = 0.0;
    
    if (kodeBuku == 'C') {
        tarif = 500 * banyakPinjam;
    } else if (kodeBuku == 'K') {
        tarif = 700* banyakPinjam;
    } else if (kodeBuku == 'N') {
        tarif = 1000 * banyakPinjam;
    }
    
    return tarif;
}

string getJenisBuku(char kodeBuku) {
    string jenisBuku;
    
    if (kodeBuku == 'C') {
        jenisBuku = "Cerpen";
    } else if (kodeBuku == 'K') {
        jenisBuku = "Komik";
    } else if (kodeBuku == 'N') {
        jenisBuku = "Novel";
    }
    
    return jenisBuku;
}

int main() {
    string namaPenyewa;
    char kodeBuku;
    int banyakPinjam;
    double tarif;
    
    cout << "Perpustakaan \"Kecil-Kecilan\"" << endl;
    cout << "----------------------------" << endl;
    
    cout << "Nama Penyewa Buku : ";
    getline(cin >> ws, namaPenyewa);
    
    cout << "Kode Buku [C/K/N] : ";
    cin >> kodeBuku;
    
    cout << "Banyak Pinjam\t: ";
    cin >> banyakPinjam;

    if (kodeBuku == 'C') {
        tarif = 500;
    } else if (kodeBuku == 'K') {
        tarif = 700;
    } else if (kodeBuku == 'N') {
        tarif = 1000;
    }
    double jumlahBayar = hitungTarif(kodeBuku, banyakPinjam);
    string jenisBuku = getJenisBuku(kodeBuku);
    
    cout << "Tarif Sewa Buku " << jenisBuku << "\t\t: Rp. " << tarif << endl;
    cout << "Jenis Buku\t\t\t: " << jenisBuku << endl;
    cout << "Penyewa dengan Nama\t\t: " << namaPenyewa << endl;
    cout << "Jumlah Bayar Penyewaan Sebesar\t: Rp. " << jumlahBayar << endl;
    
    getch();
}