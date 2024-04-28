// Pasar de segundos a días, horas y minutos.
// Escribe un programa que pida al usuario que introduzca los segundos,
// y le conteste diciéndole el número de días, horas, minutos y segundos que son.


#include <iostream>

using namespace std;

int main() {
    
    float segundos;

    cout << "Ingresa una cantidad de segundos: ";
    cin >> segundos;
    cout << "\n\n" << segundos << " segundos son: ";
    cout << (segundos / 60) << " minuto(s),\n";
    cout << (segundos / 60 / 60) << " hora(s),\n";
    cout << "y " << (segundos / 60 / 60 / 24) << " día(s),\n";

    return 0;
}