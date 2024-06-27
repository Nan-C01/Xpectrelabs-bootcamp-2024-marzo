// Cálculo de perímetro de circunferencia, área del círculo, y volumen de la esfera.
// Suponiendo que pi = 3.1416.
// Escribe un programa que pida al usuario que introduzca el radio,
//y presente por pantalla el cálculo del perímetro de la circunferencia (2*pi*r),
// el área del círculo (pi*r2), y el volumen de la esfera (V = 4*pi*r3/3).

#include <iostream>

using namespace std;

int main() {
    
    float pi = 3.1416, radio;
    cout << "Introduce el valor del radio de un círculo: ";
    cin >> radio;

    cout << "El perímetro del círculo es: " << (2.0 * pi * radio) << "\n";
    cout << "El área del círculo es: " << (pi * (radio * radio)) << "\n";
    cout << "El volumen de la esfera es: " << ((4.0 / 3.0) * pi * (radio * radio * radio)) << ".";

    return 0;
}