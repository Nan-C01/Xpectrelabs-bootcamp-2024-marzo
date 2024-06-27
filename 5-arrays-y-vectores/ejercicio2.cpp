// Modifica el ejercicio anterior para que insertes los valores numéricos con
// leer mediante un bucle y los muestre por pantalla.


#include <iostream>

using namespace std;

char salida;


int main() {
    int arreglo[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "(" << (i+1) << ") Ingresa un número: ";
        cin >> arreglo[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arreglo[i] << " ";
    }


    cout << "\n\nEscribe un caracter y presiona Enter para salir.\n";
    cin >> salida;
    return 0;
}