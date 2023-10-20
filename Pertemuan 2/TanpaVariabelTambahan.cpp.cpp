#include <iostream>

using namespace std;

int main()
{
    int X,Y;

    X = 10;
    Y = 8;

    cout << "Nilai sebelum ditukar" << endl;
    cout << X << endl;
    cout << Y << endl << endl;

    X = X + Y;
    Y = X - Y;
    X = X - Y;

    cout << "Nilai setelah ditukar" << endl;
    cout << X << endl;
    cout << Y << endl;

    return 0;
}
