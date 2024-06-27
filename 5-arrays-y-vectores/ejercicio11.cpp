// Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros cada uno,
// pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.


#include <iostream>

using namespace std;

char salida;


int main() {
    int vector1[5];
    int vector2[5];
    int vector3[5];

    cout << "Ingresa cinco números enteros para \"vector1\":\n";
    for (int i = 0; i < 5; i++) {
        cin >> vector1[i];
    }

    cout << "\nIngresa cinco números enteros para \"vector2\":\n";
    for (int i = 0; i < 5; i++) {
        cin >> vector2[i];
    }
    
    cout << "\nLos valores de vector3 son: { ";
    for (int i = 0; i < 5; i++) {
        vector3[i] = vector1[i] + vector2[i];
        cout << vector3[i] << " ";
    }
    cout << "}";

    cout << "\n\nEscribe un caracter y presiona Enter para salir.\n";
    cin >> salida;
    return 0;
}