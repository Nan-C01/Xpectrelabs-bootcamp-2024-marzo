// Que pida un número del 1 al 12 y diga el nombre del mes correspondiente.

#include <iostream>

using namespace std;

int main() {
   int numero;

    cout << "Ingresa un número del 1 al 12: ";
    cin >> numero;

    switch (numero)
    {
    case 1:
        cout << "Enero";
        break;
    
    case 2:
        cout << "Febrero";
        break;
    
    case 3:
        cout << "Marzo";
        break;
    
    case 4:
        cout << "Abril";
        break;
    
    case 5:
        cout << "Mayo";
        break;
    
    case 6:
        cout << "Junio";
        break;
    
    case 7:
        cout << "Julio";
        break;
    
    case 8:
        cout << "Agosto";
        break;
    
    case 9:
        cout << "Septiembre";
        break;
    
    case 10:
        cout << "Octubre";
        break;
    
    case 11:
        cout << "Noviembre";
        break;
    
    case 12:
        cout << "Diciembre";
        break;
    
    default:
        cout << "Has introducido un número incorrecto.";
        break;
    }

    return 0;
}