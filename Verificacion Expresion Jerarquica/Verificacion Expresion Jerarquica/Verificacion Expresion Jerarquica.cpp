// Programa que determina si una expresión jerárquica (paréntesis, corchetes
// y llaves) es válida, usando una pila.
// Ejemplo inválido: {[()}]}

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool abre(char c) {
    return c == '(' || c == '[' || c == '{';
}

bool cierre(char c) {
    return c == ')' || c == ']' || c == '}';
}

bool coinciden(char apertura, char cierre) {
    return (apertura == '(' && cierre == ')') ||
        (apertura == '[' && cierre == ']') ||
        (apertura == '{' && cierre == '}');
}

bool valido(const string& expr) {
    stack<char> pila;

    for (char c : expr) {
        if (abre(c)) {
            pila.push(c);
        }
        else if (cierre(c)) {
            if (pila.empty()) return false;
            if (!coinciden(pila.top(), c)) return false;
            pila.pop();
        }

    }
    return pila.empty();
}

int main() {
    string expr;
    cout << "Ingrese la expresion: ";
    getline(cin, expr);

    if (valido(expr))
        cout << "La expresion \"" << expr << "\" es VALIDA\n";
    else
        cout << "La expresion \"" << expr << "\" es INVALIDA\n";

    return 0;
}