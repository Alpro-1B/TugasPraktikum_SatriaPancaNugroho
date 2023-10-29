#include <iostream>

using namespace std;

int main()
{
    int score; // Masukkan score
    cout << "Masukkan nilai score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Selamat! Anda mendapatkan nilai A." << endl;
        // Jika score yang dimasukkan 90 atau lebih, maka kalimat ini yang akan keluar
    } else if (score >= 80 && score <= 89) {
        cout << "Anda mendapatkan nilai B." << endl;
        // Jika score yang dimasukkan antara 80 sampai 89, maka kalimat ini yang akan keluar
    } else if (score >= 70 && score <= 79) {
        cout << "Anda mendapatkan nilai C." << endl;
        // Jika score yang dimasukkan antara 70 sampai 79, maka kalimat ini yang akan keluar
    } else if (score >= 60 && score <= 69) {
        cout << "Anda mendapatkan nilai D." << endl;
        // Jika score yang dimasukkan antara 60 sampai 69, maka kalimat ini yang akan keluar
    } else {
        cout << "Anda mendapatkan nilai E." << endl;
        // Jika score yang dimasukkan kurang dari 60, maka kalimat ini yang akan keluar
    }
    return 0;
}
