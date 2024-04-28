// Que pida un número y diga si es positivo o negativo.

#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Por favor, ingresa un número entero: ";
    cin >> num;
    
    if (num < 0)
    {
        cout << "Tu número, " << num << ", es negativo.";
    } else if (num > 0) {
        cout << "Tu número, " << num << ", es positivo.";
    } else {
        cout << "Tu número, " << num << ", es nulo.";
    }
    
    return 0;
}