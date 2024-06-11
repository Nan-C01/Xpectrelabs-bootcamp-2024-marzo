// Escriba un programa que facilite el ingreso de dos números enteros y/o reales, muestre su suma, resta,
// multiplicación, división y el resto (módulo) de la división.

// TODO: replace % with fmod

#include <iostream>
#include <cmath>

using namespace std;

void operaciones(float numero1, float numero2) {
    cout << numero1 << " + " << numero2 << " = " << numero1 + numero2;
    cout << numero1 << " - " << numero2 << " = " << numero1 - numero2;
    cout << numero1 << " * " << numero2 << " = " << numero1 * numero2;
    cout << numero1 << " / " << numero2 << " = " << numero1 / numero2;
    cout << numero1 << " % " << numero2 << " = " << numero1 % numero2;
}

int main() {
    int a, b;
    cout << "Ingresa dos números enteros o reales.\n";
    cout << "Primer número: ";
    cin >> a;
    cout << "Segundo número: ";
    cin >> b;
    operaciones(a, b);

    return 0;
}