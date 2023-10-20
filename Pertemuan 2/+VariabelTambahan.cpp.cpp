#include <iostream>

using namespace std;

int main()
{
    int A,B,C;

    A = 10;
    B = 8;

    cout << "Nilai sebelum ditukar" << endl;
    cout << A << endl;
    cout << B << endl << endl;

    C = A;
    A = B;
    B = C;

    cout << "Nilai sesudah ditukar" << endl;
    cout << A << endl;
    cout << B << endl;
    return 0;
}
