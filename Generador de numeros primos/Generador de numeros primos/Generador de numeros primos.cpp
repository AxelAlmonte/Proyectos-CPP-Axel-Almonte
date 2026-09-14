//hacer un programa que genere numeros primos, comprobrar generando 
// 10,000, 100,000, 1,000,000, 5,000,000 y 10,000,000 numeros primos, y ver cuanto tiempo dura
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
		return true;
	}
	else
	{
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
	cout << "10,000 numeros primos";
	getchar();
	//10,000
	int cantPrimo = 0;
	int num = 0;
	while (cantPrimo < 10000)
	{
		if (esPrimo(num))
		{
			cantPrimo++;
			cout << num << endl;
		}
		num++;
	}

	cout << "100,000 numeros primos";
	getchar();
	//100,000
	cantPrimo = 0;
	num = 0;
	while (cantPrimo < 100000)
	{
		if (esPrimo(num))
		{
			cantPrimo++;
			cout << num << endl;
		}
		num++;
	}

	cout << "1,000,000 numeros primos";
	getchar();
	//1,000,000
	cantPrimo = 0;
	num = 0;
	while (cantPrimo < 1000000)
	{
		if (esPrimo(num))
		{
			cantPrimo++;
			cout << num << endl;
		}
		num++;
	}

	cout << "5,000,000 numeros primos";
	getchar();
	//5,000,000
	cantPrimo = 0;
	num = 0;
	while (cantPrimo < 5000000)
	{
		if (esPrimo(num))
		{
			cantPrimo++;
			cout << num << endl;
		}
		num++;
	}

	cout << "10,000,000 numeros primos";
	getchar();
	//10,000,000
	cantPrimo = 0;
	num = 0;
	while (cantPrimo < 10000000)
	{
		if (esPrimo(num))
		{
			cantPrimo++;
			cout << num << endl;
		}
		num++;
	}
}
