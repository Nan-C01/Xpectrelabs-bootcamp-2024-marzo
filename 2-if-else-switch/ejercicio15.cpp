// Que tome tres números y diga si la multiplicación de los dos primeros es igual al tercero.

#include <iostream>

using namespace std;

int main() {
    float a;
    float b;
    float c;

    cout << "Ingresa tres números:" << endl;
    cout << "Primer número: ";
    cin >> a;
    cout << "Segundo número: ";
    cin >> b;
    cout << "Tercer número: ";
    cin >> c;


    if (c == a * b) {
        cout << "El número " << c << " es igual a " << a << " multiplicado por " << b << ".";
    } else {
        cout << "El número " << c << " NO es igual a " << a << " multiplicado por " << b << ".";
    }
    return 0;
}