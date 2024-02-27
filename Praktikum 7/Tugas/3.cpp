#include <iostream>
#include <conio.h>
using namespace std;

struct Barang {
    int kodeBarang[4] = {1, 2, 3, 4};
    string namaBarang[4] = {"Pisau", "Indomie", "Aqua", "Mie Sedap"};
    int stok[4] = {5, 0, 400, 0};
    int harga[4] = {2500, 3500, 4500, 3500};
};

void outputData(Barang &barang) {
    cout << "Kode Barang\tNama Barang\tHarga\tStok" << endl;
    for (int i = 0; i < 3; i++) {
        cout << barang.kodeBarang[i]<< "\t\t" << barang.namaBarang[i] << "\t\t" << barang.harga[i] << "\t" << barang.stok[i] << endl;
    }
        cout << barang.kodeBarang[3]<< "\t\t" << barang.namaBarang[3] << "\t" << barang.harga[3] << "\t" << barang.stok[3] << endl;
}

void ubahHarga(Barang &barang) {
    string nama;
    cout << "Barang yang anda ingin ubah harganya? : ";
    cin.ignore();
    getline(cin, nama);
    for (int i = 0; i < 4; i++) {
        if (nama == barang.namaBarang[i]) {
            cout << "Harga barang menjadi : ";
            cin >> barang.harga[i];
        }
    }
    cout << endl;
    cout << "Kode Barang\tNama Barang\tHarga\tStok" << endl;
    for (int i = 0; i < 3; i++) {
        cout << barang.kodeBarang[i]<< "\t\t" << barang.namaBarang[i] << "\t\t" << barang.harga[i] << "\t" << barang.stok[i] << endl;
    }
        cout << barang.kodeBarang[3]<< "\t\t" << barang.namaBarang[3] << "\t" << barang.harga[3] << "\t" << barang.stok[3] << endl;
}

void tambahStok(Barang &barang) {
    string nama;
    cout << "Barang apa yang ingin anda tambah stoknya : ";
    cin.ignore();
    getline(cin, nama);
    for (int i = 0; i < 4; i++) {
        if (nama == barang.namaBarang[i]) {
            cout << "Stok barang menjadi : ";
            cin >> barang.stok[i];
        }
    }
    cout << endl;
    cout << "Kode Barang\tNama Barang\tHarga\tStok" << endl;
    for (int i = 0; i < 3; i++) {
        cout << barang.kodeBarang[i]<< "\t\t" << barang.namaBarang[i] << "\t\t" << barang.harga[i] << "\t" << barang.stok[i] << endl;
    }
        cout << barang.kodeBarang[3]<< "\t\t" << barang.namaBarang[3] << "\t" << barang.harga[3] << "\t" << barang.stok[3] << endl;
}

void urutDesc(Barang &barang) {
    cout << "Kode Barang\tNama Barang\tHarga\tStok" << endl;
        cout << barang.kodeBarang[3]<< "\t\t" << barang.namaBarang[3] << "\t" << barang.harga[3] << "\t" << barang.stok[3] << endl;
    for (int i = 2; i >= 0; i--) {
        cout << barang.kodeBarang[i]<< "\t\t" << barang.namaBarang[i] << "\t\t" << barang.harga[i] << "\t" << barang.stok[i] << endl;
    }
}

int main() {
    int pilihan;
    char ulang;
    Barang barang;

    do {
        cout << "1. Menampilkan data-data barang" << endl;
        cout << "2. Menambah stok barang yang sudah habis" << endl;
        cout << "3. Mengganti harga barang" << endl;
        cout << "4. Mengurutkan data barang secara desceding" << endl << endl;
        cout << "Program mana yang ingin anda lakukan? : ";
        cin >> pilihan;
        switch (pilihan) {
            case 1:
                outputData(barang);
                break;
            case 2:
                tambahStok(barang);
                break;
            case 3:
                ubahHarga(barang);
                break;
            case 4:
                urutDesc(barang);
                break;
            default:
                cout << "Masukan dengan benar!!" << endl;
        }
        cout << endl;
        cout << "Ingin keluar? [Y/N] : ";
        cin >> ulang;
        cout << endl;
    } while (ulang == 'n' || ulang == 'N');

    getch();
}