// Que pida tres números y detecte si se han introducido en orden creciente.

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


    if (a < b && b < c) {
        cout << "Tus números, " << a << ", " << b << " y " << c << ", se han introducido de menor a mayor.";
    } else {
        cout << "Tus números, " << a << ", " << b << " y " << c << ", NO se han introducido de menor a mayor.";
    }

    return 0;
}