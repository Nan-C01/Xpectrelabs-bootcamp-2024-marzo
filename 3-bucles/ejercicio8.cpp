// 8- Realiza un programa que pida 2 números enteros, e imprima los números pares que existen entre los 2.
// Nota: Se debe validar que el segundo número sea mayor que el primero.

#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    cout << "Introduce dos números. El primer número debe ser menor que el segundo.\n";

    do {
        cout << "Primer número: ";
        cin >> a;
        cout << "Segundo número: ";
        cin >> b;
        if (a >= b) {
            cout << "El primer número no debe ser mayor o igual al segundo. Introduce los números de nuevo." << endl;
        }
    } while (a >= b);

    cout << "Los números pares que existen entre los números " << a << " y " << b << " son:\n";

    // NOTA: no sabía si "entre los números a y b" significa que se incluyen a y b (en caso de ser par cada uno), así que este programa los incluye

    int i = a;
    
    // asegurándose que i (que será el número a imprimir) no sea impar
    if (i % 2 == 1) {
            i += 1;
    }

    while (i <= b) {
        cout << i;
        if (i == b || i == (b - 1)) {
            cout << ".";
        } else {
            cout << ", ";
        }
        i += 2;
    }

    cout << "\nDe nuevo:\n";

    for (i = a; i <= b; i += 2) {
        // no se me ocurre otra forma de ajustar i para que sea par antes de empezar el bucle,
        // sin tener que poner este código dentro del bucle
        if (i % 2 == 1) {
            i += 1;
        }
        cout << i;
        if (i == b || i == (b - 1)) {
            cout << ".";
        } else {
            cout << ", ";
        }
    }

    return 0;
}