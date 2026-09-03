#include <iostream>
using namespace std;

int main() {
    int floreros = 100;

    while (floreros % 6 != 0 || (floreros - 8) % 11 != 0) {
        floreros--;
    }

    floreros = floreros - 8;

    cout << "Salvador tiene " << floreros << " floreros para vender." << endl;

    return 0;
}