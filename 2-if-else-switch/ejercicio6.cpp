// Que pida 3 números y los muestre en pantalla de mayor a menor.

#include <iostream>

using namespace std;

int main() {
    
    int a, b, c;
    cout << "A continuación, ingresa 3 números enteros:\n";
    cout << "Primer número: ";
    cin >> a;
    cout << "Segundo número: ";
    cin >> b;
    cout << "Tercer número: ";
    cin >> c;

    cout << "Los números que ingresaste son, de mayor a menor:\n";
    
    if (b > a) {
        if (c > b) {
            cout << c << ", " << b << ", " << a;
        } else if (c > a) {
            cout << b << ", " << c << ", " << a;
        } else {
            cout << b << ", " << a << ", " << c;
        }
    } else {
        if (c > a) {
            cout << c << ", " << a << ", " << b;
        } else if (c > b) {
            cout << a << ", " << c << ", " << b;
        } else {
            cout << a << ", " << b << ", " << c;
        }
    }

    return 0;
}