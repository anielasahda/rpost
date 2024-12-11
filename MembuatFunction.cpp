#include <iostream>

using namespace std;

// Fungsi untuk menghitung luas persegi
double hitungLuasPersegi(double sisi) {
    return sisi * sisi;
}

// Fungsi untuk menghitung keliling persegi
double hitungKelilingPersegi(double sisi) {
    return 4 * sisi;
}

// Fungsi untuk menghitung luas persegi panjang
double hitungLuasPersegiPanjang(double panjang, double lebar) {
    return panjang * lebar;
}

// Fungsi untuk menghitung keliling persegi panjang
double hitungKelilingPersegiPanjang(double panjang, double lebar) {
    return 2 * (panjang + lebar);
}

// Fungsi untuk menghitung luas segitiga
double hitungLuasSegitiga(double alas, double tinggi) {
    return 0.5 * alas * tinggi;
}

// Fungsi untuk menghitung keliling segitiga
double hitungKelilingSegitiga(double sisi1, double sisi2, double sisi3) {
    return sisi1 + sisi2 + sisi3;
}

// Fungsi untuk menghitung luas lingkaran
double hitungLuasLingkaran(double jariJari) {
    const double pi = 3.14159;
    return pi * jariJari * jariJari;
}

// Fungsi untuk menghitung keliling lingkaran
double hitungKelilingLingkaran(double jariJari) {
    const double pi = 3.14159;
    return 2 * pi * jariJari;
}

int main() {
    char pilihan;

    do {
        cout << " Kalkulator Luas dan Keliling Bangun Datar " << endl;
        cout << "1. Hitung Luas dan Keliling Persegi" << endl;
        cout << "2. Hitung Luas dan Keliling Persegi Panjang" << endl;
        cout << "3. Hitung Luas dan Keliling Segitiga" << endl;
        cout << "4. Hitung Luas dan Keliling Lingkaran" << endl;
        cout << "Pilih (1-4), atau 0 untuk keluar: ";
        cin >> pilihan;

        switch (pilihan) {
        case '1': {
            double sisi;
            cout << "Masukkan panjang sisi: ";
            cin >> sisi;
            cout << "Luas persegi: " << hitungLuasPersegi(sisi) << endl;
            cout << "Keliling persegi: " << hitungKelilingPersegi(sisi) << endl;
            break;
        }
        case '2': {
            double panjang, lebar;
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
            cout << "Luas persegi panjang: " << hitungLuasPersegiPanjang(panjang, lebar) << endl;
            cout << "Keliling persegi panjang: " << hitungKelilingPersegiPanjang(panjang, lebar) << endl;
            break;
        }
        case '3': {
            double sisi1, sisi2, sisi3;
            cout << "Masukkan panjang sisi 1: ";
            cin >> sisi1;
            cout << "Masukkan panjang sisi 2: ";
            cin >> sisi2;
            cout << "Masukkan panjang sisi 3: ";
            cin >> sisi3;
            cout << "Luas segitiga: " << hitungLuasSegitiga(sisi1, sisi2) << endl; // Asumsi segitiga siku-siku
            cout << "Keliling segitiga: " << hitungKelilingSegitiga(sisi1, sisi2, sisi3) << endl;
            break;
        }
        case '4': {
            double jariJari;
            cout << "Masukkan jari-jari: ";
            cin >> jariJari;
            cout << "Luas lingkaran: " << hitungLuasLingkaran(jariJari) << endl;
            cout << "Keliling lingkaran: " << hitungKelilingLingkaran(jariJari) << endl;
            break;
        }
        case '0':
            cout << "Terima kasihhhh :)" << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
        }

        cout << endl;
    } while (pilihan != '0');

    return 0;
}