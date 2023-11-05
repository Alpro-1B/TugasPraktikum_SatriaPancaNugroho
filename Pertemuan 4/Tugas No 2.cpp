#include <iostream>

using namespace std;

int main() {
    int tinggi;

    cout << "Program untuk membuat piramida menggunakan * " << endl << endl;
    cout << "Masukkan tinggi segitiga : "; //Output untuk memasukkan tinggi segitiga
    cin >> tinggi; //Untuk input tinggi

    for (int i = 1; i <= tinggi; ++i) {
        // Untuk membuat leading spaces
        for (int j = 1; j <= tinggi - i; ++j) {
            cout << " ";
        }

        // Untuk mencetak bintang di setiap baris
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
