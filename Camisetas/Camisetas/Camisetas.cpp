#include <iostream>
using namespace std;

int main()
{
    for (int a = 10; a <= 99; a++)
    {
        for (int b = 10; b <= 99; b++)
        {
            int concatenado = a * 100 + b;  
            int suma = a + b;

            if (suma * suma == concatenado)
            {
                cout << a << " y " << b << "  ->  (" << a << "+" << b << ")^2 = "
                    << suma * suma << " = " << concatenado << endl;
            }
        }
    }
    return 0;
}