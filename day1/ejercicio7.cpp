// Escribe un programa que pregunte al usuario cuántos años tiene, y conteste al usuario: “Ahora se que tienes (x) años, gracias”.


#include <iostream>

using namespace std;

int main() {
    int edad;
    cout << "Por favor, introduzca su edad: ";
    cin >> edad;
    cout << "Ahora sé que usted tiene " << edad << " años, gracias.";
    return 0;
}