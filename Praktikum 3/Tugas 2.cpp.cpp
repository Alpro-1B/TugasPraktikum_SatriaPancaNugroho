#include <iostream>

using namespace std;

int main() {
int x, y, z;

cout << "Masukkan tiga angka (contoh : 1 2 3): "; //output untuk memasukkan angka
cin >> x >> y >> z; //input untuk memasukkan 3 angka

int terbesar = x; //a adalah angka terbesar untuk sekarang

if (y > terbesar) { //jika b lebih besar dari variabel terbesar maka nilai variabel terbesar akan pindah ke b
terbesar = y;
}

if (z > terbesar) { //jika c lebih besar dari variabel terbesar makan nilai variabel terbesar akan pindah ke c
terbesar = z;
}

cout << "Angka terbesar adalah : " << terbesar << endl; //output menyatakan angka terbesarnya
return 0;
}
