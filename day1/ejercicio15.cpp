// Cambio de dólares a euros.
// Suponiendo que 1 euro = 1.33250 dólares.
// Escribe un programa que pida al usuario un número de dólares y calcule el cambio en euros.


#include <iostream>

using namespace std;

int main() {
    
    float dolares, euro = 1.3325;
    cout << "Ingresa la cantidad en dólares: ";
    cin >> dolares;

    cout << dolares << " dólares equivale a: ";
    cout << (dolares * euro) << " euros.";

    return 0;
}