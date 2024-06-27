// Cálculo de área y perímetro
// Escribe un programa que pregunte al usuario los dos lados de un rectángulo
// y presente por pantalla el cálculo del perímetro (suma de los lados) y el área (base por altura).

#include <iostream>

using namespace std;

int main() {
    
    float largo, ancho;

    cout << "Por favor, ingresa el largo del rectángulo en centímetros: ";
    cin >> largo;
    cout << "A continuación, introduce el ancho del rectángulo: ";
    cin >> ancho;

    cout << "El perímetro de tu rectángulo es " << ((ancho * 2.0) + (largo * 2.0)) << ",\n";
    cout << "y el área de tu rectángulo es " << (ancho * largo) << ".";

    return 0;
}