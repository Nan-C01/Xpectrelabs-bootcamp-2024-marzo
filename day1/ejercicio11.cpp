#include <iostream>

using namespace std;

int main() {
    float numero;

    cout << "Por favor, ingresa un número: ";
    cin >> numero;

    numero = numero - ((15.0 / 100.0) * numero);

    cout << "Tu número menos el 15 por cierto es: " << numero;

    return 0;
}