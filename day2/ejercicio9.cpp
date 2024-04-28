// Que pida un número y diga si es mayor de 100.

#include <iostream>

using namespace std;

int main() {
    float a;
    cout << "Introduce un número: ";
    cin >> a;

    if (a > 100) {
        cout << "Tu número, " << a << ", es mayor de 100.";
    } else {
        cout << "Tu número, " << a << ", NO es mayor de 100.";
    }

    return 0;
}