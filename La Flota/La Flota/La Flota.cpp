// Numeros menores que 500 cuyo cuadrado termina en el propio numero.
#include <iostream>
using namespace std;

int main() {
    int total = 0;
    for (int n = 1; n < 500; n++) {
        long long cuadrado = (long long)n * n;
        int potencia = 1;               
        for (int t = n; t > 0; t /= 10) potencia *= 10;

        if (cuadrado % potencia == n) {
            cout << n << "^2 = " << cuadrado << endl;
            total++;
        }
    }
    cout << "Total de camiones: " << total << endl;
    return 0;
}