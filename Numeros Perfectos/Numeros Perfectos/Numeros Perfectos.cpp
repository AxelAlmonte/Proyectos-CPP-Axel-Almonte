#include <iostream>
using namespace std;

int sumaDivisores(int n) {
    int suma = 0;
    for (int d = 1; d <= n / 2; d++)
        if (n % d == 0)
            suma += d;
    return suma;
}

void mostrarPerfecto(int n) {
    cout << n << " = ";
    bool primero = true;
    for (int d = 1; d <= n / 2; d++) {
        if (n % d == 0) {
            if (!primero) cout << " + ";
            cout << d;
            primero = false;
        }
    }
    cout << endl;
}

int main() {
    int cantidad = 0;
    for (int n = 1; n < 1000; n++) {
        if (n == sumaDivisores(n)) {
            mostrarPerfecto(n);
            cantidad++;
        }
    }
    return 0;
}