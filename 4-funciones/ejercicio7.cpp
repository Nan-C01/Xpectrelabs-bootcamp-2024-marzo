// Escriba un programa que facilite el ingreso de dos números enteros y/o reales, muestre su suma, resta,
// multiplicación, división y el resto (módulo) de la división.

// NOTA: usé fmod ya que % no funciona con punto flotante

#include <iostream>
#include <cmath>

using namespace std;

void operaciones(float numero1, float numero2) {
    cout << numero1 << " + " << numero2 << " = " << numero1 + numero2 << "\n";
    cout << numero1 << " - " << numero2 << " = " << numero1 - numero2 << "\n";
    cout << numero1 << " * " << numero2 << " = " << numero1 * numero2 << "\n";
    cout << numero1 << " / " << numero2 << " = " << numero1 / numero2 << "\n";
    cout << numero1 << " % " << numero2 << " = " << fmod(numero1, numero2) << "\n";
}

int main() {
    float a, b;
    cout << "Ingresa dos números enteros o reales.\n";
    cout << "Primer número: ";
    cin >> a;
    cout << "Segundo número: ";
    cin >> b;
    operaciones(a, b);

    return 0;
}