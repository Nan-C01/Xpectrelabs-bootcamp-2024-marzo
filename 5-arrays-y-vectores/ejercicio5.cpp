// Realizar un programa que defina un vector llamado “vector_numeros” de 10 enteros,
// a continuación lo inicialice con valores aleatorios (del 1 al 10) y posteriormente
// muestre en pantalla cada elemento del vector junto con su cuadrado y su cubo.

#include <iostream>

using namespace std;

char salida;


int main() {
    
    int vector_numeros[10] = {14, 123, 186, 191, 67, 18, 107, 167, 137, 84};

    for (int i = 0; i < 10; i++) {
        cout << "Elemento no. " << (i + 1) << ": " << vector_numeros[i] << "\n";
        cout << "Cuadrado: " << vector_numeros[i] * vector_numeros[i] << "\n";
        cout << "Cubo: " << vector_numeros[i] * vector_numeros[i] * vector_numeros[i] << "\n\n";
    }

    cout << "\n\nEscribe un caracter y presiona Enter para salir.\n";
    cin >> salida;
    return 0;
}