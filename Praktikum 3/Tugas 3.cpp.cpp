#include <iostream>
using namespace std;

int main() {
    int bangunDatar, luas;
 //tersedia 3 pilihan bangun datar untuk dihitung
    cout << "Pilih bangun datar yang ingin dihitung luasnya:" << endl;
    cout << "1. Persegi" << endl; //ketik 1 jika ingin menghitung persegi
    cout << "2. Persegi Panjang" << endl; //ketik 2 jika ingin menghitung persegi panjang
    cout << "3. Segitiga" << endl; //ketik 3 jika ingin menghitung segitiga
    cout << "Masukkan pilihan (1/2/3): "; //masukkan pilihan
    cin >> bangunDatar;

    switch (bangunDatar) {
        case 1: //untuk menghitung Persegi
            int sisi;//untuk mendeklarasikan sisi
            cout << "Masukkan panjang sisi persegi: ";//output untuk user memasukkan sisi
            cin >> sisi;//input untuk user memasukkan sisi
            luas = sisi * sisi;//untuk mengkalikan
            cout << "Luas dari persegi adalah : " << luas << endl;//output untuk menampilkan hasil perkalian
            break;//break untuk membantasi gerakan dari case 1 ke case lainnya

        case 2: //untuk menghitung Persegi Panjang
            int panjang, lebar;//untuk mendeklarasikan panjang dan lebar
            cout << "Masukkan panjang : ";//output untuk memasukkan panjang
            cin >> panjang;//input untuk user memasukkan panjang
            cout << "Masukkan lebar : ";//output untuk memasukkan lebar
            cin >> lebar;//input untuk user memasukkan lebar
            luas = panjang * lebar;//untuk mengkalikan panjang dan lebar
            cout << "Luas dari persegi panjang adalah : " << luas << endl;//output untuk menampilkan hasil perkalian
            break;//break untuk membantasi gerakan dari case 2 ke case lainnya

        case 3: //untuk menghitung Segitiga
            int alas, tinggi;//untuk mendeklarasikan alas dan tinggi
            cout << "Masukkan panjang alas : ";//output untuk memasukkan alas
            cin >> alas;//input untuk user memasukkan alas
            cout << "Masukkan tinggi : ";//output untuk memasukkan tinggi
            cin >> tinggi;//input untuk user memasukkan tinggi
            luas = 0.5 * alas * tinggi;//untuk mengkalikan 0.5 dengan alas dan tinggi
            cout << "Luas dari segitiga adalah : " << luas << endl;//output untuk menampilkan hasil perkalian
            break;//break untuk membantasi gerakan dari case 3 ke case lainnya

        default:
            cout << "Pilihan tidak valid." << endl;//jika pilihan yang dimasukkan user tidak sesuai
    }

    return 0;
}
