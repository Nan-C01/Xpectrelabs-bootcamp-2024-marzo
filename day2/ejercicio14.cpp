// Que tome dos números y diga si ambos son pares o impares.

#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    cout << "Teclea dos números:" << endl;
    cout << "Primer número: ";
    cin >> a;
    cout << "Segundo número: ";
    cin >> b;

    if (a % 2 == 0) {
        if (b % 2 == 0) {
            cout << "Ambos números son pares.";
        } else {
            cout << "El número " << a << " es par y el número " << b << " es impar.";
        }
    } else {
        if (b % 2 == 1) {
            cout << "Ambos números son impares.";
        } else {
            cout << "El número " << a << " es impar y el número " << b << " es par.";
        }
    }
    return 0;
}