#include <iostream>
using namespace std;

int main() {
    int bolas = 10000;
    int capa = 1;
    int usadas = 0;

    while (usadas + capa * capa <= bolas) {
        usadas = usadas + capa * capa;
        capa++;
    }

    cout << "Capas que se pueden hacer: " << capa - 1 << endl;
    cout << "Bolas que sobran: " << bolas - usadas << endl;

    return 0;
}