#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

void resolverEcuacion(double a, double b, double c) {
    if (a == 0) {
        cout << "El coeficiente 'a' no puede ser 0 (no seria una ecuacion cuadratica).\n";
        if (b != 0) {
            double x = -c / b;
            cout << "Es una ecuacion lineal. Solucion: x = " << x << "\n";
        }
        else {
            cout << "No se puede resolver con a = 0 y b = 0.\n";
        }
        return;
    }

    double discriminante = b * b - 4 * a * c;

    cout << "\nResultado\n";
    cout << "Ecuacion: " << a << "x^2 + " << b << "x + " << c << " = 0\n";
    cout << "Discriminante: " << discriminante << "\n";

    if (discriminante > 0) {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Dos soluciones reales:\n";
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    }
    else if (discriminante == 0) {
        double x = -b / (2 * a);
        cout << "Una unica solucion (raiz doble):\n";
        cout << "x = " << x << "\n";
    }
    else {
        double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-discriminante) / (2 * a);
        cout << "Soluciones complejas:\n";
        cout << "x1 = " << parteReal << " + " << parteImaginaria << "i\n";
        cout << "x2 = " << parteReal << " - " << parteImaginaria << "i\n";
    }
}

int main() {
    char opcion;

    do {
        double a, b, c;

        cout << "Solucionador de Ecuaciones Cuadraticas\n";

        cout << "Ingrese el coeficiente a: ";
        cin >> a;
        cout << "Ingrese el coeficiente b: ";
        cin >> b;
        cout << "Ingrese el coeficiente c: ";
        cin >> c;

        resolverEcuacion(a, b, c);

        cout << "\nDesea resolver otra ecuacion? (s/n): ";
        cin >> opcion;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\n";

    } while (opcion == 's' || opcion == 'S');

    cout << "Fin del programa.\n";

    return 0;
}