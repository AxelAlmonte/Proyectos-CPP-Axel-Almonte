#include <iostream>
using namespace std;

int main()
{
    int horas = 24;
    double totalAtraso = 0;

    long anterior = 0;
    long actual = 1;
    double potencia = 1;
    long siguiente;

    cout << "Hora\tF(n)\Atraso\n";

    for (int n = 1; n <= horas; n++)
    {
        potencia *= 2;
        double atraso = (double)actual / potencia;
        totalAtraso += atraso;

        cout << n << "\t" << actual << "\t" << atraso << endl;

        siguiente = actual + anterior;
        anterior = actual;
        actual = siguiente;
    }

    cout << "\nEl reloj se atrasara " << totalAtraso << " minutos en 24 horas." << endl;

    return 0;
}