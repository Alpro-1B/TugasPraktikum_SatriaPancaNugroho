#include <iostream>

using namespace std;

int main() {

    int a=100;
    for(int c=1; c<=a; c++)
    {
        cout<<"=";
    }
    cout << endl;

    int tinggi;
    cout << "Halo! Selamat Datang di Program\n";
    cout << "Ini Adalah Program Untuk Mencari Nilai Tertinggi Dalam Array\n";
    cout << "Kemudian Program Akan Memberi Tahu User Apakah Nilai Tersebut Ada Dalam Array Atau Tidak\n";
    cout << "serta menampilkan indeksnya jika ditemukan\n";
    cout << "Selamat Mencoba ^-^\n";

   int b=100;
    for(int d=1; d<=b; d++)
    {
        cout<<"=";
    }
    cout << endl << endl;

    int n;

    // Input jumlah elemen array
    cout << "Jumlah elemen bisa anda tentukan sendiri dibawah ini\n";
    cout << "Masukkan jumlah elemen dalam array : ";
    cin >> n;
    cout << endl;

    // Membuat array dengan ukuran n
    int arr[n];

    // Input elemen array
    cout << "Setelah menetukan jumlah elemen\n";
    cout << "Selanjutnya masukkan elemen-elemen sesuai keinginan anda!\n";
    cout << "Masukkan elemen-elemen array : \n";
    for (int i = 0; i < n; ++i) {
        cout << "Elemen ke - " << i + 1 << " : ";
        cin >> arr[i];
    }

    // Mencari nilai tertinggi dalam array
    int max = arr[0];
    int index = 0;

    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    // Menampilkan hasil
    cout << endl;
    cout << "Setelah memasukkan elemen-elemen tersebut\n";
    cout << "Maka, program akan menampilkan hasil sebagai berikut : \n";
    cout << "Nilai tertinggi dalam array adalah : " << max << endl;

    if (index != -1) {
        cout << "Nilai tersebut ditemukan pada indeks : " << index << endl;
    } else {
        cout << "Nilai tersebut tidak ditemukan dalam array." << endl;
    }

    cout << endl;
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
    return 0;
}
