#include <iostream>
#include <conio.h>
using namespace std;

int main () {
    int jml_Mahasiswa;
    string nama[100], status[100];
    float UTS[100], UAS[100], nAkhir[100];

    cout << "Masukan jumlah mahasiswa : ";
    cin >> jml_Mahasiswa;
    cout << endl;

    cout << "Masukan Data Mahasiswa" << endl << endl;
    
    for (int i = 0; i < jml_Mahasiswa; i++) {
        cout << "Masukan Data Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama Mahasiswa : ";
        cin >> nama[i];
        cout << "Nilai UTS : ";
        cin >> UTS[i];
        cout << "Nilai UAS : ";
        cin >> UAS[i];
        cout << endl;
        nAkhir[i] = (UTS[i] + UAS[i])/2;

        if (nAkhir[i] > 60) {
            status[i] = "Lulus";
        } else {
            status[i] = "Tidak Lulus";
        }
    }

    cout << "DAFTAR NILAI MAHASISWA" << endl;
    cout << "_______________________________________________" << endl;
    cout << "No\t" << "Nama\t" << "UTS\t" << "UAS\t" << "Nilai\t" << "Status" << endl;
    cout << "_______________________________________________" << endl;
    for (int i = 0; i < jml_Mahasiswa; i++) {
        cout << i + 1 << "\t" << nama[i] << "\t" << UTS[i] << "\t" << UAS[i] << "\t" << nAkhir[i] << "\t" << status[i] << endl;
        cout << "_______________________________________________" << endl;
    }

    getch();
}