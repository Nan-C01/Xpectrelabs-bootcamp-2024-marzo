// Que sólo permita introducir los caracteres S y N.

#include <iostream>

using namespace std;

int main() {
    char opcion;

    cout << "Presiona S para Sí, o N para No: ";
    cin >> opcion;

    switch (opcion)
    {
    case 'S':
        cout << "Has presionado S para Sí.";
        break;
    case 's':
        cout << "Has presionado S para Sí.";
        break;

    case 'N':
        cout << "Has presionado N para No.";
        break;
    case 'n':
        cout << "Has presionado N para No.";
        break;

    default:
        cout << "Has introducido una opción inválida.";
        break;
    }
    
    return 0;
}