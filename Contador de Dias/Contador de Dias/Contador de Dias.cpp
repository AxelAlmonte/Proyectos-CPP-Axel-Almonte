#include <iostream>
using namespace std;

bool esBisiesto(int anio) {
	if ((anio % 4) != 0)
	{
		return false;
	}
	else if ((anio % 100) != 0)
	{
		return true;
	}
	else if ((anio % 400) != 0)
	{
		return false;
	}
	else {
		return true;
	}
}

int main()
{
	int anio;
	int meses;
	int dias;
	cout << "Escriba un anio: ";
	cin >> anio;
	if (esBisiesto(anio))
	{
		cout << "El anio es bisiesto" << endl;
		dias++;
	}
	else {
		cout << "El anio no es bisiesto" << endl;
	}
	int difAnios = 2026 - anio;
	int meses = (2026 * 12) - anio * 12;
	int dias = ((meses - (difAnios * 5)) * 31) + ((meses - (difAnios * 7)) * 30);
	cout << "Desde el anio " << anio << " han pasado " << meses << " meses y " << dias << " dias";
}
