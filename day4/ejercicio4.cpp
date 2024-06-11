// Crear una función que permita calcular el cubo de un número real (float) 

#include <iostream>

using namespace std;

float cubo(float numero) {
    return (numero * numero * numero);
}

int main() {
    
    float a;
    cout << "Introduce un número real: ";
    cin >> a;

    cout << "El cubo de " << a << " es: ";
    cout << cubo(a);

    return 0;
}