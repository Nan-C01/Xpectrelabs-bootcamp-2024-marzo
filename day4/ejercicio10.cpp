// Calcule el área de un cuadrado

#include <iostream>

using namespace std;

int areaCuadrado(int base, int altura) {
    cout << "El área del cuadrado es: " << (base*altura);

    return 0;
}

int main() {

    int a, b;

    cout << "Ingresa la base y altura de un cuadrado para calcular su área.\n";
    cout << "Base: ";
    cin >> a;
    cout << "Altura: ";
    cin >> b;

    areaCuadrado(a, b);

    return 0;
}