// Lea un número entero y determine si el número es positivo, negativo o nulo.
// Para cada caso escriba un mensaje.

#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero > 0){
        cout << "Tu número es positivo.";
    }
    else if (numero < 0){
        cout << "Tu número es negativo.";
    }
    else {
        cout << "Tu número es nulo (cero).";
    }
    
    return 0;
}