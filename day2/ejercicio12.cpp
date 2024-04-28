// Que pida tres números e indicar si el tercero es igual a la suma del primero y el segundo.

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


    if (c == a + b) {
        cout << "El número " << c << " es igual a la suma de " << a << " y " << b << ".";
    } else {
        cout << "El número " << c << " NO es igual a la suma de " << a << " y " << b << ".";
    }
    return 0;
}