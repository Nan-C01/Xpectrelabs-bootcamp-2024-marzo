// Crear un función que reciba un número real y devuelva un número entero con el valor
// -1 si el número es negativo, 1 si el número es positivo o 0 si es cero.


#include <iostream>

using namespace std;

void numeroEntero(float numero) {

    if (numero < 0) {
        cout << -1;
    } else if (numero == 0) {
        cout << 0;
    } else {
        cout << 1;
    }
    
}

int main() {
    float a;
    cout << "Escribe un número real: ";
    cin >> a;
    numeroEntero(a);
    return 0;
}