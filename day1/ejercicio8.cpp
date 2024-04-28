// Escribí un programa que solicite al usuario ingresar tres números para luego mostrarle el promedio de los tres.

#include <iostream>

using namespace std;

int main() {
    float numero1;
    float numero2;
    float numero3;
    float promedio;
    cout << "Por favor, ingrese tres números: ";
    cin >> numero1 >> numero2 >> numero3;
    promedio = (numero1 + numero2 + numero3) / 3;
    cout << "El promedio de los tres números que ingresó es " << promedio << ".";

    return 0;
}