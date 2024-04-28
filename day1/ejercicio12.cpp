#include <iostream>
// #include <cstring>

using namespace std;

int main() {
    string palabra1;
    string palabra2;

    cout << "Por favor, ingresa dos palabras: ";
    cin >> palabra1;
    cin >> palabra2;

    cout << palabra1 << " " << palabra2 << "\n";

    string concatenado = palabra1 + " " + palabra2;

    cout << concatenado;


    return 0;
}