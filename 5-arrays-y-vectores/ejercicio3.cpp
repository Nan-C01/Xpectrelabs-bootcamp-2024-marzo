// Crea un array con un tamaño de 10, inserta los valores numéricos que desees
// de la manera que quieras y muestra por pantalla la media de valores del array.

#include <iostream>

using namespace std;

char salida;

void mediaValores(int suma, int n) {
    cout << suma / n;
}

int main() {
    int arreglo[10] = {7,5,135,6457,14,6,3,3,5,10};
    int suma;
    for(int i = 0; i < 10; i++) {
        suma += arreglo[i];
    }

    mediaValores(suma, 10);


    cout << "\n\nEscribe un caracter y presiona Enter para salir.\n";
    cin >> salida;
    return 0;
}