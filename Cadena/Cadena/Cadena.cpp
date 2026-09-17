#include <iostream>
using namespace std;

int main()
{
	int mejorNumero = 0;
	int mejorLongitud = 0;

	for (int inicio = 1; inicio < 99; inicio++)
	{
		int n = inicio;
		int longitud = 0;

		do
		{
			if (n % 2 == 0)
				n /= 2;
			else
			{
				n *= 3;
				n += 1;
			}
			longitud++;
		} while (n != 4);

		if (longitud > mejorLongitud)
		{
			mejorLongitud = longitud;
			mejorNumero = inicio;
		}
	}

	cout << "El invitado con la cadena mas larga es el numero " << mejorNumero << endl;
	cout << "Longitud de la cadena: " << mejorLongitud << " pasos" << endl;

	return 0;
}