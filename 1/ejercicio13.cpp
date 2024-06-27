//Cálculo de precios con descuento
// Escribe un programa que pregunte el precio, el tanto por ciento de descuento, y te diga el precio con descuento.
// Por ejemplo, si el precio que introduce el usuario es 300 y el descuento 20,
// el programa dirá que el precio final con descuento es de 240.


#include <iostream>

using namespace std;

int main() {
    float numero;
    float descuento;
    float preciofinal;

    cout << "Por favor, ingresa un número: ";
    cin >> numero;
    cout << "Ingresa el descuento: ";
    cin >> descuento;

    preciofinal = numero - ((descuento / 100.0) * numero);

    cout << "Tu cantidad menos el porcentaje ingresado es: " << preciofinal;

    return 0;
}