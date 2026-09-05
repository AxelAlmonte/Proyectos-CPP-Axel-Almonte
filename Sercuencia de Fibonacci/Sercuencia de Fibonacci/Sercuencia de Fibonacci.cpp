#include <iostream>
using namespace std;

int main()
{
    cout << "Escoja un numero limite:\n";
    int a;
    cin >> a;

    long b = 1;
    long c = 0;
    while (c < a && b < a)
    {
        cout << b << endl;
        c = c + b;
        cout << c << endl;
        b = c + b;
    }
}