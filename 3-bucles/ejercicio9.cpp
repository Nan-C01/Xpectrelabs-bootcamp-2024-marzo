// 9- Calcular la suma de n números introducidos por el teclado

#include <iostream>

using namespace std;

int main() {
    int n;
    int a; // esta variable contiene el primer número y se le van sumando los demás números
    int b; // esta variable contiene cada nuevo número que se suma

    do {
        cout << "¿Cuántos números quieres sumar? ";
        cin >> n;
        if (n < 1) {
            cout << "Ingresaste un número menor a 1. Inténtalo de nuevo.";
        } else  {
            cout << "A continuación, introduce el primer número a sumar: ";
            cin >> a;
            n--;
        }
    } while (n < 1);

    while (n > 0) {
        cout << "Número siguiente: ";
        cin >> b;
        a += b;
        n--;
    }

    // Esta es una forma alternativa de hacer la suma, pero preferí no usarla porque no quería crear otra variable (i)
    /* for (int i = 1; i <= n; i++) {
        cout << "Número siguiente: ";
        cin >> b;
        a += b;
    } */

    cout << "La suma total de tus números es: " << a;

    return 0;
}