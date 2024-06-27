// 5.- Realiza un programa que muestre la suma de los números impares del 1 al 100

#include <iostream>

using namespace std;

int main() {

    int i = 1;
    int suma = 0;
    while (i <= 100) {
        suma += i;
        i += 2;
    }
    cout << suma << "\n";

    i = 1;
    suma = 0;
    do {
        suma += i;
        i += 2;
    } while (i <= 100);
    cout << suma << "\n";

    suma = 0;
    for (i = 1; i <= 100; i += 2) {
        suma += i;
    }
    cout << suma << "\n";

    return 0;
}