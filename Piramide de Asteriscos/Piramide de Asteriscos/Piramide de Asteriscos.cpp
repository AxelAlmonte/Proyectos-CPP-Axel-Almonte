#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int asteriscos;
    string cadena;
    cout << "De cuantos asteriscos sera la base de la piramide? (impares solamente): " << endl;
    cin >> asteriscos;
    for (int i = 1; i <= asteriscos; i++)
    {
        if ((i % 2) != 0)
        {
            cout << setw(((asteriscos - i) / 2) + 1);
            for (int a = 0; a < i; a++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    //cin >> cadena;
    //cout << cadena.length();
}