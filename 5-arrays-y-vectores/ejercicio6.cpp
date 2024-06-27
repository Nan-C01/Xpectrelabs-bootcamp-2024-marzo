// Crear un vector de 5 elementos de cadenas de caracteres, inicializa el vector con
// datos leídos por el teclado. Copia los elementos del vector en otro vector pero en orden inverso,
// y muéstralo por la pantalla.


#include <iostream>

using namespace std;

char salida;


int main() {
    
    string vectorOriginal[5];

    for (int i = 0; i < 5; i++) {
        cout << "(" << i + 1 << ") Escribe un elemento: ";
        cin >> vectorOriginal[i];
    }

    string vectorInverso[5];

    for (int i = 0; i < 5; i++) {
        vectorInverso[i] = vectorOriginal[5 - i - 1];
    }

    for (int i = 0; i < 5; i++) {
        cout << vectorInverso[i] << " ";
    }


    cout << "\n\nEscribe un caracter y presiona Enter para salir.\n";
    cin >> salida;
    return 0;
}