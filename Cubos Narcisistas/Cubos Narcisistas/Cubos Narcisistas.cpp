#include <iostream>
#include <string>
using namespace std;

int main()
{
    string stringNumber = "";
    int Sum = 0;
    for (int Number = 2; Number < 10000; Number++) {
        stringNumber = to_string(Number);
        for(char charNumber: stringNumber)
        {
            Sum += pow(charNumber - '0', 3);
        }
        if (Sum == Number) {
            cout << "Este numero es un cubo narcisista: ";
            cout << Number << endl;
        }
        Sum = 0;
        stringNumber = "";
    }
}
