// Que muestre un menú que contemple las opciones “Archivo”, “Buscar” y “Salir”,
// en caso de que no se introduzca una opción correcta se notificará por pantalla.

#include <iostream>

using namespace std;

int main() {
    char opcion;

    cout << "Elige una de las opciones siguientes introduciendo su respectivo número:\nArchivo (1)\nBuscar (2)\nSalir (3)" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case '1':
        cout << "Has seleccionado \"Archivo\".";
        break;
    case '2':
        cout << "Has seleccionado \"Buscar\".";
        break;
    case '3':
        cout << "Has seleccionado \"Salir\".";
        break;

    default:
        cout << "Has introducido una respuesta inválida.";
        break;
    }

    return 0;
}