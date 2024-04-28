// Escribe un programa que pida un número entero, y conteste al usuario: “Has introducido el número (x), gracias”.

#include <iostream>

using namespace std;

int main() {
    int entero;
    cout << "Por favor, introduzca un número entero: ";
    cin >> entero;
    cout << "Usted ha introducido el número " << entero << ", gracias.";


    return 0;
}