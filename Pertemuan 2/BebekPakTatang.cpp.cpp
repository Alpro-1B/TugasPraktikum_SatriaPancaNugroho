#include <iostream>

using namespace std;

int main()
{
    int N, M;

    cout << "Jumlah Bebek : ";
    cin >> N;
    cout << "Jumlah Teman : ";
    cin >> M;
    cout << " " << endl;
    int jumlahBebekYangDibagi = N / M;
    int sisaBebek = N % M;

    cout << "Maka :" << endl;

    cout << "Setiap teman akan menerima " << jumlahBebekYangDibagi << " ekor bebek." << endl;
    cout << "Sisa bebek yang tersisa adalah " << sisaBebek << " ekor bebek.";
    return 0;
}
