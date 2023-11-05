#include <iostream>

using namespace std;

int main() {
    cout << "Program untuk menghitung deret Fibonacci" << endl << endl;

    int n; //untuk mwndeklarasikan variabel n
    cout << "Masukkan jumlah angka : "; //output untuk memasukkan angka
    cin >> n; //Untuk input variabel n

    int a = 0, b = 1, c; //Untuk mendeklarasikan variabel "a = 0", "b = 1", dan "c"

    cout << "Deret Fibonacci ke - " << n << " adalah : "; //Output untuk menampilkan hasil perhitungan

    for (int i = 0; i < n; i++) {
        if (i < 2) {
            c = i;
        }
        else {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << " ";
    }

    cout << endl;

    return 0;
}
