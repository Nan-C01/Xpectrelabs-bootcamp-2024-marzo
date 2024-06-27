// Hacer un programa que inicialice un vector de números con valores aleatorios,
// y posterior ordene los elementos de menor a mayor.


#include <iostream>
#include <algorithm>

using namespace std;

char salida;


int main() {
    int arreglo[10] = {1, 235, 72093, 52, 57030496, 74575, 1010, 50, 9486, 2};
    sort(arreglo, arreglo + 10); // no entiendo cómo o por qué funciona esto


    for (int i = 0; i < 10; i++) {
        cout << arreglo[i] << " ";
    }




    cout << "\n\nEscribe un caracter y presiona Enter para salir.\n";
    cin >> salida;
    return 0;
}