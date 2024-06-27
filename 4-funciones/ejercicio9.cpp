// Crear una función que reciba como parámetro un numero entero y escriba la tabla de multiplicar
// de ese número (por ejemplo: para el 3 deberá llegar desde 3x0=0 hasta 3x10=30) 

#include <iostream>

using namespace std;

int tablaMultiplicar(int entero) {
    int i;
    for (i = 1; i <= 10; i++) {
        cout << entero << " x " << i << " = " << (entero * i) << "\n";
    }

    return 0;
}

int main() {
    
    int a;

    cout << "Ingresa un número entero: ";
    cin >> a;

    tablaMultiplicar(a);

    return 0;
}