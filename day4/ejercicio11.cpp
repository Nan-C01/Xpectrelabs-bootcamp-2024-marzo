// Permita introducir una medida expresada en centímetros y la convierta en pulgadas (1 pulgada = 2,54 centímetros).

#include <iostream>

using namespace std;

int centimetrosAPulgadas(float cm) {
    cout << cm << " centímetros son equivalentes a " << (cm / 2.54) << " pulgadas.";
    return 0;
}

int main() {
    float a;
    cout << "Introduce una medida en centímetros: ";
    cin >> a;

    centimetrosAPulgadas(a);

    return 0;
}