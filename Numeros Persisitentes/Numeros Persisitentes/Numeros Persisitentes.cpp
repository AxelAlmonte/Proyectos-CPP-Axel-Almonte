// Encuentra el unico numero de dos digitos con persistencia mayor que 3.
#include <iostream>
using namespace std;

int productoDigitos(int n) {
    int p = 1;
    while (n > 0) {
        p *= n % 10;
        n /= 10;
    }
    return p;
}

int persistencia(int n) {
    int cont = 0;
    while (n >= 10) {         
        n = productoDigitos(n);
        cont++;
    }
    return cont;
}

int main() {
    for (int n = 10; n <= 99; n++) {
        int p = persistencia(n);
        if (p > 3)
            cout << "Numero: " << n << "  Persistencia: " << p << endl;
    }
    return 0;
}