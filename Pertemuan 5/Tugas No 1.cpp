#include <iostream>

using namespace std;

int batas, jumlahGanjil=0, jumlahGenap=0, jumlahPrima=0;

void bilanganGanjil();
void bilanganGenap();
void bilanganPrima();
void faktorGanjil();
void faktorGenap();
void faktorPrima();

int main() {
    int a=100;
    for(int c=1; c<=a; c++)
    {
        cout<<"=";
    }
    cout << endl;

    int tinggi;
    cout << "Halo! Selamat Datang di Program\n";
    cout << "Ini Adalah Program Untuk Mencari Bilangan Ganjil, Genap, dan Prima Dengan Batas Tertentu\n";
    cout << "Serta Manampilkan Jumlah Dan Faktor Dari Masing-Masing Bilangan\n";
    cout << "Selamat Mencoba ^-^\n";

   int b=100;
    for(int d=1; d<=b; d++)
    {
        cout<<"=";
    }
    cout << endl << endl;

    cout << "Pertama-tama, masukkan batas yang anda inginkan \n";
    cout << "Masukkan Batas : ";
    cin >> batas;
    cout << "Setelah batas dimasukkan, maka inilah yang akan ditampilkan oleh program\n";
    cout << endl;
    cout << "Bilangan Ganjil : ";
    bilanganGanjil();
    cout << "Bilangan Genap : ";
    bilanganGenap();
    cout << "Bilangan Prima : ";
    bilanganPrima();
    cout << "Jumlah bilangan ganjil : " << jumlahGanjil << endl;
    cout << "Jumlah bilangan genap : " << jumlahGenap << endl;
    cout << "Jumlah bilangan Prima : " << jumlahPrima << endl << endl;
    cout << "Faktor Ganjil : ";
    faktorGanjil();
    cout << "Faktor Genap : ";
    faktorGenap();
    cout << "Faktor Prima : ";
    faktorPrima();
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
void bilanganGanjil(){
for (int i = 0; i <= batas; i++){
        if (i % 2 != 0){
            cout << i << " "; // Menampilkan bilangan ganjil
            jumlahGanjil += i;   // Untuk menjumlahkan bilangan ganjil
        }
    }

    cout << endl;
}
void bilanganGenap(){
for (int i = 0; i <= batas; i += 2){
        cout << i << " "; // Menampilkan bilangan genap
        jumlahGenap += i; // Untuk menjumlahkan bilangan genap
    }
    cout << endl;

}
void bilanganPrima(){
for (int i = 2; i <= batas; i++){
        int j; //Untuk mendeklarasi variabel
        for (j = 2; j * j <= i && i % j != 0; j++){
        }
        if (j * j > i){
            cout << i << " "; // Menampilkan bilangan prima
            jumlahPrima += i; // Untuk menjumlahkan bilangan prima
        }
    }
    cout << endl << endl;
}
void faktorGanjil(){
for (int k = 1; k <= jumlahGanjil; k++){
		if (jumlahGanjil % k == 0){
			cout << k << " ";
			}
		}
	cout<< endl;
}
void faktorGenap(){
for (int l = 1; l <= jumlahGenap; l++){
		if (jumlahGenap % l == 0){
			cout << l << " ";
			}
		}
		cout<< endl;
}
void faktorPrima(){
for (int m = 1; m <= jumlahPrima; m++){
		if (jumlahPrima % m == 0){
			cout << m << " ";
			}
		}
    cout << endl;
}
