#include <iostream>

using namespace std;

void fungsiSegitiga (int tinggi);

int main() {

    int a=100;
    for(int c=1; c<=a; c++)
    {
        cout<<"=";
    }
    cout << endl;

    int tinggi;
    cout << "Halo! Selamat Datang di Program\n";
    cout << "Ini Adalah Program Untuk Membuat Piramida Menggunakan * \n";
    cout << "Selamat Mencoba ^-^\n";

   int b=100;
    for(int d=1; d<=b; d++)
    {
        cout<<"=";
    }
    cout << endl << endl;

    cout << "Pertama-tama, masukkan tinggi Piramida yang anda inginkan \n";
    cout << "Masukkan tinggi segitiga : "; //Output untuk memasukkan tinggi segitiga
    cin >> tinggi; //Untuk input tinggi
    cout << "Setelah dimasukkan, program akan membuat Piramida sesuai dengan tinggi yang anda inginkan\n";
    cout << "Inilah hasilnya : \n\n";
    fungsiSegitiga(tinggi); //Memanggil fungsi yang sudah dibuat
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
// Function
void fungsiSegitiga (int tinggi)
{
    // Looping untuk membuat piramida
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
//Finish
}
}
