#include <iostream>
#include <conio.h>
using namespace std;

int main () {
    struct ttl {
        int tanggal;
        int bulan;
        int tahun;
        string tempat;
    };
    struct addres {
        string jalan;
        int RT;
        int RW;
        string desa;
        string kecamatan;
    };
    struct dataKTP {
        string Nama;
        ttl TTL;
        string Jenkel;
        addres Alamat;
        string Agama;
        string Status;
        string Pekerjaan;
    } KTP;

    cout << "Masukan Data Penduduk" << endl;
    for (int i = 1; i <= 3; i++) {
        cout << "Data Penduduk ke-" << i << endl;
        cout << "Nama : ";
        getline (cin, KTP.Nama);
        cout << "Tempat Lahir : ";
        getline (cin, KTP.TTL.tempat);
        cout << "Tanggal Lahir : ";
        cin >> KTP.TTL.tanggal;
        cout << "Bulan Lahir : ";
        cin >> KTP.TTL.bulan;
        cout << "Tahun Lahir : ";
        cin >> KTP.TTL.tahun;
        cout << "Jenis Kelamin : ";
        cin >> KTP.Jenkel;
        cout << "Alamat : " << endl;
        cin.ignore();
        cout << "Nama Jalan : ";
        getline (cin, KTP.Alamat.jalan);
        cout << "RT : ";
        cin >> KTP.Alamat.RT;
        cout << "RW : ";
        cin >> KTP.Alamat.RW;
        cin.ignore();
        cout << "Nama Desa : ";
        getline (cin, KTP.Alamat.desa);
        cout << "Nama Kecamatan : ";
        getline (cin, KTP.Alamat.kecamatan);
        cout << "Agama : ";
        getline (cin, KTP.Agama);
        cout << "Status : ";
        getline (cin, KTP.Status);
        cout << "Pekerjaan : ";
        getline (cin, KTP.Pekerjaan);
        cout << endl;

        cout << "_____________________________________" << endl;
        cout << "KARTU TANDA PENDUDUK" << endl;
        cout << "Nama\t\t\t: " << KTP.Nama << endl;
        cout << "Tempat, Tgl Lahir\t: " << KTP.TTL.tempat << ", " << KTP.TTL.tanggal << "-" << KTP.TTL.bulan << "-" << KTP.TTL.tahun << endl;
        cout << "Jenis Kelamin\t\t: " << KTP.Jenkel << endl;
        cout << "Alamat\t\t\t: Jl. " << KTP.Alamat.jalan << endl;
        cout << "\tRT/RW\t\t: " << KTP.Alamat.RT << "/" << KTP.Alamat.RW << endl;
        cout << "\tDesa\t\t: " << KTP.Alamat.desa << endl;
        cout << "\tKecamatan\t: " << KTP.Alamat.kecamatan << endl;
        cout << "Agama\t\t\t: " << KTP.Agama << endl;
        cout << "Status Perkawinan\t: " << KTP.Status << endl;
        cout << "Pekerjaan\t\t: " << KTP.Pekerjaan << endl;
        cout << "_____________________________________" << endl << endl;
    }
    getch();
}