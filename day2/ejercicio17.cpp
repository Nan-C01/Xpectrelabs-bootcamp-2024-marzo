// Que muestre un menú donde las opciones sean “Equilátero”, “Isósceles” y “Escaleno”,
// pida una opción y calcule el perímetro del triángulo seleccionado



#include <iostream>

using namespace std;

int main() {
    char opcion;
    float a;
    float b;
    float c;
    cout << "Elige una de las opciones siguientes tecleando su respectivo número:\nEquilátero (1)\nIsósceles (2)\nEscaleno (3)" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case '1':
        cout << "Has seleccionado \"Equilátero\"." << endl << "Por favor, introduce la longitud de cualquiera de los lados del triángulo (en cm): ";
        cin >> a;
        /*b = a, c = a;
        cout << "Tu triángulo equilátero tiene un perímetro de " << (a + b + c) << "centímetros.";*/ //Solución alternativa
        cout << "Tu triángulo equilátero tiene un perímetro de " << (a * 3) << " centímetros.";

        break;
    case '2':
        cout << "Has seleccionado \"Isósceles\"." << endl << "Por favor, introduce la longitud de cualquiera de los dos lados largos del triángulo (en cm): ";
        cin >> a;
        cout << "Ahora introduce la longitud del lado más corto (en cm): ";
        cin >> b;
        cout << "Tu triángulo isósceles tiene un perímetro de " << ((a * 2) + b) << " centímetros.";
        break;

    case '3':
        cout << "Has seleccionado \"Escaleno\"." << endl << "Por favor, introduce la longitud del primer lado del triángulo (en cm): ";
        cin >> a;
        cout << "Ahora introduce la longitud del segundo lado (en cm): ";
        cin >> b;
        cout << "Finalmente, introduce la longitud del tercer lado (en cm): ";
        cin >> c;
        cout << "Tu triángulo escaleno tiene un perímetro de " << (a + b + c) << " centímetros.";
        break;

    default:
        cout << "Respuesta inválida.";
        break;
    }

    return 0;
}