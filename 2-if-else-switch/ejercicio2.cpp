// Que pida un número y diga si es par o impar.

#include <iostream>

using namespace std;

int main() {
    cout << "Ingresa un número entero: ";
    int numero;
    cin >> numero;

    if (numero % 2 == 0)
    {
        cout << "Tu número es par.";
    }
    else
    {
        cout << "Tu número es impar.";
    }
    
    
    return 0;
}