#include <iostream>

using namespace std;

int main() {
    char salida; // esta variable se utiliza al final del programa para cerrarlo. Es como "presiona cualquier tecla para continuar", pero hay que escribir algo y luego presionar Enter, así que es un poco más tardado.

    cout << "Escribe un caracter y presiona Enter para salir.";
    cin >> salida;
    return 0;
}