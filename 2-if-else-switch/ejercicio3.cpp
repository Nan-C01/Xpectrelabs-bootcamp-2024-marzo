
// Que pida un número del 1 al 7 y diga el día de la semana correspondiente.

#include <iostream>

using namespace std;

int main() {
    
    int numero;

    cout << "Ingresa un número del 1 al 7: ";
    cin >> numero;

    switch (numero)
    {
    case 1:
        cout << "Lunes";
        break;
    
    case 2:
        cout << "Martes";
        break;
    
    case 3:
        cout << "Miércoles";
        break;
    
    case 4:
        cout << "Jueves";
        break;
    
    case 5:
        cout << "Viernes";
        break;
    
    case 6:
        cout << "Sábado";
        break;
    
    case 7:
        cout << "Domingo";
        break;
    
    default:
        cout << "Has introducido un número incorrecto.";
        break;
    }

    return 0;
}