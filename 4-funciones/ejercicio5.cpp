// Crear una función que calcule cuál es el número menor de dos números enteros 

#include <iostream>

using namespace std;

int numeroMenor(int num1, int num2) {

    cout << "\n";

    if (num1 < num2) {
        cout << "El número menor es: " << num1;
    } else if (num1 == num2) {
        cout << "Los números son iguales.";
    } else {
        cout << "El número menor es: " << num2;
    }
    
    return 0;
}

int main() {
    int a, b;
    cout << "Ingresa dos números enteros para determinar cuál es menor.\n";
    cout << "Primer número: ";
    cin >> a;
    cout << "Segundo número: ";
    cin >> b;

    numeroMenor(a, b);

    return 0;
}