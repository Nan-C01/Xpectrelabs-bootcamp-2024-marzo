// Desarrolle una función que reciba un número y devuelva el valor 1 si es un número primo o 0 en caso contrario

#include <iostream>

using namespace std;

int numeroPrimo(int numero) {
    int i;
    if (numero < 2) {
        return 0;
    } else {
        for (i = 2; i < numero; i++) {
            if (numero % i == 0) {
                return 0;
            }
        }
    }

    return 1;
}

int main() {
    int a;
    cout << "Ingresa un número: ";
    cin >> a;

    cout << numeroPrimo(a);

    return 0;
}