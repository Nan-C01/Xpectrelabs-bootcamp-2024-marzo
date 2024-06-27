// Calcule el área y el perímetro de un rectángulo dada la base y la altura.

#include <iostream>

using namespace std;

void perimetro(int base, int altura) {
    cout << "Perímetro: " << (base * 2) + (altura * 2);
}

int main() {
    int a, b;
    
    cout << "Ingresa base y altura.\n";
    cout << "Base: ";
    cin >> a;
    cout << "Altura: ";
    cin >> b;

    perimetro(a, b);
    

    return 0;
}