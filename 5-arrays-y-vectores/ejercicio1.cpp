// Crea un array con un tamaño de 5, e inicializa los valores y muestralos por pantalla.

#include <iostream>

using namespace std;

char salida;


int main() {
    int arreglo[5] = {3, 6, 222222, 18, 56};

    for (int i = 0; i < 5; i++)
    {
        cout << arreglo[i] << "\n";
    }

    cout << "\n\nEscribe un caracter y presiona Enter para salir.\n";
    cin >> salida;
    return 0;
}