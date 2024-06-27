// Crea un array o arreglo unidimensional donde tú le indiques el tamaño por teclado,
// y una función que rellene el array o arreglo con los múltiplos de un número pedido por teclado.
// Por ejemplo, si defino un array de tamaño 5 y elijo un 3 en la función, el array contendrá 3, 6, 9, 12, 15.
// Muéstralos por pantalla usando otra función distinta.


#include <iostream>

using namespace std;

char salida;

void agregarMultiplos(int largo_array, int array[]) {
    int factor;
    cout << "Ingresa un número entero: ";
    cin >> factor;

    for (int i = 0; i < largo_array; i++) {
        array[i] = (factor * (i + 1));
    }
}

void imprimirArray(int largo_array, int array[]) {
    cout << "{";
    for (int i = 0;  i < largo_array; i++) {
        cout << array[i];
        if (i != (largo_array - 1)) {
            cout << ", ";
        }
    }
    cout << "}";
}

int main() {
    int arr_length;
    
    cout << "¿Cuántos elementos tendrá el arreglo? ";
    cin >> arr_length;

    int arrayMultiplos[arr_length];

    agregarMultiplos(arr_length, arrayMultiplos);
    imprimirArray(arr_length, arrayMultiplos);


    cout << "\n\nIntroduce un caracter para salir. ";
    cin >> salida;
    return 0;
}