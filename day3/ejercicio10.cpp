// 10- Calcular la suma de los números pares e impares comprendidos entre 1 y n.

#include <iostream>

using namespace std;

int main() {
    int n;
    do {
        cout << "Introduce un número mayor a 1: ";
        cin >> n;
        if (n <= 1) {
            cout << "Introdujiste un número inválido. Inténtalo de nuevo.\n";
        }
    } while (n <= 1);

    // Números impares

    int i = 1;
    int suma = 0;
    while (i <= n) {
        suma += i;
        i += 2;
    }
    cout << "La suma de todos los números impares entre 1 y " << n << " es:  " << suma << ".\n";

    // Números pares

    suma = 0;
    for (i = 2; i <= n; i += 2) {
        suma += i;
    }
    cout << "La suma de todos los números pares entre 1 y " << n << " es:  " << suma << ".\n";
    
    return 0;
}