#include <iostream>

using namespace std;

int fibonacci(int n);

int main() {

    int a=100;
    for(int c=1; c<=a; c++)
    {
        cout<<"=";
    }
    cout << endl;

    int tinggi;
    cout << "Halo! Selamat Datang di Program\n";
    cout << "Ini Adalah Program Untuk Menghitung Deret Fibonacci\n";
    cout << "Selamat Mencoba ^-^\n";

   int b=100;
    for(int d=1; d<=b; d++)
    {
        cout<<"=";
    }
    cout << endl << endl;

    int n; // untuk mendeklarasikan variabel n
    cout << "Pertama-tama, masukkan angka yang anda inginkan \n";
    cout << "Masukkan jumlah angka : "; // output untuk memasukkan angka
    cin >> n; // untuk input variabel n
    cout << "Setelah dimasukkan, program akan menampilkan deret Fibonacci sesuai dengan jumlah yang ditentukan\n\n";
    cout << "Hasilnya seperti dibawah ini : \n";
    cout << "Deret Fibonacci ke - " << n << " adalah : "; // output untuk menampilkan hasil perhitungan

    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }

    cout << endl << endl;
int w=100;
    for(int x=1; x<=w; x++)
    {
        cout<<"=";
    }
    cout << endl;
    cout << "Seperti itulah program berjalan\n";
    cout << "Terimakasih sudah mencoba ^-^\n";

    int y=100;
    for(int z=1; z<=y; z++)
    {
        cout<<"=";
    }
    cout << endl;
    return 0;
}
// Fungsi untuk menghitung deret Fibonacci
int fibonacci(int n) {
    if (n < 2) {
        return n;
    } else {
        int a = 0, b = 1, c;

        for (int i = 2; i <= n; ++i) {
            c = a + b;
            a = b;
            b = c;
        }

        return b;
    }
}
