#include <iostream>
using namespace std;

bool esPrimo(int numero) {
	int indice = 0;
	for (int i = 1; i < 100; i++)
	{
		if (numero % i == 0) {
			indice++;
		}
	}
	if (indice == 2)
	{
		cout << "El numero es primo";
		return true;
	}
	else
	{
		cout << "El numero es compuesto";
		return false;
	}
}

//bool SiPrimo(int numero) {
//	int lim, i = 2; bool sp = true;
//	if (numero < 0) numero = numero * (-1);
//	lim = sqrt(numero);
//	while (i <= lim && sp == true)
//	{
//		if (numero % i == 0) sp == false;
//		i++;
//	}
//	return sp;
//}

int main()
{
	int a;
	int b = 0;
	cout << "Ingrese un numero: ";
	cin >> a;
	esPrimo(a);	
}