// Pasar de días, horas y minutos a segundos.
// Escribe un programa que pida al usuario los siguientes datos: días, horas y minutos.
// Y le conteste con la cantidad de segundos totales que son esos datos.


#include <iostream>

using namespace std;

int main() {
    
    int dias, horas, minutos;
    
    cout << "Por favor ingresa una cantidad de días: ";
    cin >> dias;
    cout << dias << " días son " << (dias * 24 * 60 * 60) << " segundos.\n";
    
    cout << "Ingresa una cantidad de horas: ";
    cin >> horas;
    cout << horas << " horas son " << (horas * 60 * 60) << " segundos.\n";
    
    cout << "Ingresa una cantidad de minutos: ";
    cin >> minutos;
    cout << minutos << " minutos son " << (minutos * 60) << " segundos.\n";

    return 0;
}