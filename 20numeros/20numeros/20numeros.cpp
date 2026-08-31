#include <iostream>
using namespace std;

int main() {
    int numeros[20];

    for (int i = 0; i < 20; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int mayor = numeros[0];
    int menor = numeros[0];
    for (int i = 1; i < 20; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    int moda = numeros[0];
    int maxRepeticiones = 0;
    for (int i = 0; i < 20; i++) {
        int repeticiones = 0;
        for (int j = 0; j < 20; j++) {
            if (numeros[j] == numeros[i]) {
                repeticiones++;
            }
        }
        if (repeticiones > maxRepeticiones) {
            maxRepeticiones = repeticiones;
            moda = numeros[i];
        }
    }

    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    cout << "La moda es: " << moda << endl;

    return 0;
}