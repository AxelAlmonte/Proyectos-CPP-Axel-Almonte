#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calcularCuota(double monto, double i, int n) {
    if (i == 0) return monto / n;
    double factor = pow(1 + i, n);
    return monto * (i * factor) / (factor - 1);
}

int main() {
    double monto, tasaAnual, anios;

    cout << "Monto prestado: ";
    cin >> monto;
    cout << "Tasa anual (%): ";
    cin >> tasaAnual;
    cout << "Tiempo en anios: ";
    cin >> anios;

    // Validacion de datos
    if (cin.fail() || monto <= 0 || tasaAnual < 0 || anios <= 0) {
        cout << "[ERROR] Datos invalidos: el monto y el tiempo deben ser mayores que 0 "
            "y la tasa no puede ser negativa.\n";
        return 1;
    }

    int meses = (int)round(anios * 12);
    if (meses < 1) {
        cout << "[ERROR] El prestamo debe durar al menos un mes.\n";
        return 1;
    }

    double tasa = tasaAnual / 100.0;      // 18 -> 0.18
    double i = tasa / 12.0;               // tasa mensual
    double cuota = calcularCuota(monto, i, meses);
    double interesTotal = cuota * meses - monto;

    cout << fixed << setprecision(2);
    cout << "\n=========== Tabla de Amortizacion ===========\n";
    cout << left << setw(16) << "Monto" << "$ " << monto << "\n";
    cout << left << setw(16) << "Tasa" << tasaAnual << "%\n";
    cout << left << setw(16) << "Tiempo (meses)" << meses << "\n";
    cout << left << setw(16) << "Cuota" << "$ " << cuota << "\n";
    cout << left << setw(16) << "Interes Total" << "$ " << interesTotal << "\n\n";

    cout << right << setw(5) << "No."
        << setw(14) << "Capital"
        << setw(14) << "Interes"
        << setw(16) << "Saldo" << "\n";
    cout << string(49, '-') << "\n";
    cout << setw(5) << "" << setw(14) << "" << setw(14) << "" << setw(16) << monto << "\n";

    double saldo = monto;
    for (int k = 1; k <= meses; k++) {
        double interes = saldo * (tasaAnual / 100.0 / 12.0);
        double capital = cuota - interes;
        saldo = saldo - capital;
        if (k == meses || fabs(saldo) < 0.005) saldo = 0;

        cout << setw(5) << k
            << setw(14) << capital
            << setw(14) << interes
            << setw(16) << saldo << "\n";
    }
    return 0;
}