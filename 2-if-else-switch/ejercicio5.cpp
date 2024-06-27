// Que pida 3 números y los muestre en pantalla de menor a mayor.


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

    cout << "Los números que ingresaste son, de menor a mayor:\n";
    
    if (a < b) {
        if (b < c) {
            cout << a << ", " << b << ", " << c;
        } else if (a < c) {
            cout << a << ", " << c << ", " << b;
        } else {
            cout << c << ", " << a << ", " << b;
        }
    } else {
        if (a < c) {
            cout << b << ", " << a << ", " << c;
        } else if (b < c) {
            cout << b << ", " << c << ", " << a;
        } else {
            cout << c << ", " << b << ", " << a;
        }
    }

    return 0;
}