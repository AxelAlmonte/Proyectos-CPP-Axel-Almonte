// Busca horas hh:mm tales que hh^2 + mm^2 == hhmm (tomado como numero sin coma).
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int h = 0; h <= 23; h++) {
        for (int m = 0; m <= 59; m++) {
            int numero = h * 100 + m;
            if (h * h + m * m == numero) {
                cout << setfill('0') << setw(2) << h << ":"
                    << setw(2) << m << "  ->  " << numero << endl;
            }
        }
    }
    return 0;
}