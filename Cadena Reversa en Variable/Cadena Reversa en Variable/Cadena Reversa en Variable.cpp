#include <iostream>
using namespace std;

int main()
{
    string cadena;
    int longitud;
    cout << "Escriba una cadena de caracteres: ";
    cin >> cadena;

    longitud = cadena.length();
    for (int i = longitud - 1; i >= longitud / 2; i--)
    {
        char caracterInicial = cadena[(longitud - 1) - i];
        char caracterFinal = cadena[i];
        cadena[(longitud - 1) - i] = caracterFinal;
        cadena[i] = caracterInicial;
    }
    cout << cadena;
}