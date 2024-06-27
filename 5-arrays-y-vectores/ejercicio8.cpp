// Programa que declare un arreglo de diez elementos enteros y pida números para rellenarlo
// hasta que se llene el arreglo o se introduzca un número negativo. Entonces se debe imprimir el arreglo
// (sólo los elementos introducidos).


#include <iostream>

using namespace std;

char salida;


int main() {
    int arreglo[10];
    int elementos = 0;

    cout << "Introduce hasta diez (10) números enteros.\n";
    for (int i = 0; i < 10; i++) {
        cout << "(" << i + 1 << ") Ingresa un número: ";
        cin >> arreglo[i];
        if (arreglo[i] < 0) {
            i = 9;
        }
        elementos++;
    }
    cout << "{ ";
    for (int i = 0; i < elementos; i++) {
        cout << arreglo[i] << " ";
    }
    cout  << "}";



    cout << "\n\nEscribe un caracter y presiona Enter para salir.\n";
    cin >> salida;
    return 0;
}