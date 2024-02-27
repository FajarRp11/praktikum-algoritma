#include <iostream>
#include <conio.h>
using namespace std;

int main () {
    struct time {
        int jam;
        int menit;
        int detik;
    } jamDatang, jamPulang, selisihJam;

    cout << "Jam datang : ";
    cin >> jamDatang.jam;
    cout << "Menit datang : ";
    cin >> jamDatang.menit;
    cout << "Detik datang : ";
    cin >> jamDatang.detik;
    cout << endl;

    cout << "Jam pulang : ";
    cin >> jamPulang.jam;
    cout << "Menit pulang : ";
    cin >> jamPulang.menit;
    cout << "Detik pulang : ";
    cin >> jamPulang.detik;
    cout << endl;

    /* KONVERSI JAM KE DETIK */

    int jamDatang_detik = (jamDatang.jam * 3600) + (jamDatang.menit * 60) + jamDatang.detik;
    int jamPulang_detik = (jamPulang.jam * 3600) + (jamPulang.menit * 60) + jamPulang.detik;

    /* SELISIH JAM */
    int selisihJam_detik = jamPulang_detik - jamDatang_detik;
    selisihJam.jam = selisihJam_detik/3600;
    selisihJam.menit = (selisihJam_detik % 3600)/60;
    selisihJam.detik = selisihJam_detik % 60;

    /* MENCARI BIAYA PARKIR */
    int cost;
    if (selisihJam_detik % 3600 == 0) {
        cost = selisihJam_detik/3600 * 3000;
    } else {
        cost = (selisihJam_detik/3600 + 1) * 3000;
    }

    cout << "Jam Datang\t= " << jamDatang.jam << ":" << jamDatang.menit << ":" << jamDatang.detik << endl; 
    cout << "Jam Pulang\t= " << jamPulang.jam << ":" << jamPulang.menit << ":" << jamPulang.detik << endl; 
    cout << "Lama Parkir\t= " << selisihJam.jam << ":" << selisihJam.menit << ":" << selisihJam.detik << endl;
    cout << "Biaya\t\t= Rp. " << cost << endl;
    getch();
}