// 6.- Realiza un programa que pida números mientras no se ingrese uno negativo.
// Al final, se debe mostrar la suma de los números ingresados

#include <iostream>

using namespace std;

int main() {
    
    int a;
    int b;

    cout << "Introduce números positivos para sumarlos. Para terminar, ingresa un número negativo.\n";
    cout << "Primer número: ";
    cin >> a;

    if (a >= 0) {
        do {
            cout << "Número siguiente: ";
            cin >> b;
            if (b >= 0) {
                a += b;
            }
        } while (b >= 0);

        cout << "La suma de todos tus números es: " << a;
    } else {
        cout << "Suma cancelada.";
    }    

    return 0;
}