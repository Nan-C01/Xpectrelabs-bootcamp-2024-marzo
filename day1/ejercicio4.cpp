#include <iostream>

using namespace std;

int main() {

    float km;
    float gas;
    float consum;

    cout << "Ingresa la cantidad de kilómetros recorridos: ";
    cin >> km;

    cout << "Ingresa la cantidad de combustible consumido (en litros): ";
    cin >> gas;

    consum = gas / km;

    cout << "La cantidad de combustible consumido por kilómetro es: " << consum << " lt/km";




    return 0;
}