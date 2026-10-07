#include <iostream>
using namespace std;

int main()
{
	int horaria = 01;
	for (int minutaria = 5; minutaria <= 60; minutaria += 5)
	{
		if ((horaria * 5) == minutaria)
		{
			if (horaria < 10){ cout << "0" << horaria; }
			else { cout << horaria; }

			if (minutaria < 10){ cout << ":" << "0" << minutaria << endl; }
			else { cout << ":" << minutaria << endl; }

			horaria++;
		}
	}
}
