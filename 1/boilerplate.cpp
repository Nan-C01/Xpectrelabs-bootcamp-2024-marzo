#include <iostream>

using namespace std;

char salida; // esta variable se utiliza al final del programa para cerrarlo. Es como "presiona cualquier tecla para continuar", pero hay que escribir algo y luego presionar Enter, así que es un poco más tardado.

int main() {

    cout << "\n\nEscribe un caracter y presiona Enter para salir.\n\n";
    cin >> salida;
    return 0;
}