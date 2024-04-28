// Que pida una letra y detecte si es una vocal.

#include <iostream>

using namespace std;

int main() {
    char letra;
    cout << "Por favor, ingresa una letra: ";
    cin >> letra;

    if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U') {
        cout << "Tu letra, " << letra << ", es una vocal.";
    } else {
        cout << "Tu letra, " << letra << ", NO es una vocal.";
    }
    return 0;
}