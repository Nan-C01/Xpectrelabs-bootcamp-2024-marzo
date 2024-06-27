// Que tome tres números y diga si el tercero es el resto de la división de los dos primeros.


#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int c;

    cout << "Ingresa tres números:" << endl;
    cout << "Primer número: ";
    cin >> a;
    cout << "Segundo número: ";
    cin >> b;
    cout << "Tercer número: ";
    cin >> c;


    if (c == a % b) {
        cout << "El número " << c << " es igual al residuo de la división de " << a << " entre " << b << ".";
    } else {
        cout << "El número " << c << " NO es igual al residuo de la división de " << a << " entre " << b << " (" << (a % b) << ").";
    }
    return 0;
}