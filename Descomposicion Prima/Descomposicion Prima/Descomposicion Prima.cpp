#include <iostream>
#include <list>
using namespace std;

int main()
{
	int a;
	list<int> Factores;
	cout << "Ingrese un numero: ";
	cin >> a;


	for (int i = 2; i < 100; i++)
	{
		if (a % i == 0) {
			Factores.push_front(i);
			a /= i;
			while (a % i == 0)
			{
				Factores.push_front(i);
				a /= i;
			}
		}
	}
	for (int n : Factores) {
		cout << n << " ";
	}
}