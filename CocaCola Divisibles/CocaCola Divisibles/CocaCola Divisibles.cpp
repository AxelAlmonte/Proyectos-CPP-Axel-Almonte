#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            cout << "coca" << endl;
        }
        else if (i % 5 == 0) {
            cout << "cola" << endl;
        }
        else {
            cout << i << endl;
        }
    }
    return 0;
}