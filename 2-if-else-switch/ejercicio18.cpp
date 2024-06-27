// Que lea un importe bruto y calcule su importe neto,
// si es mayor de 15.000 se le aplicará un 16% de impuestos, en caso contrario se le aplicará un 10%.



#include <iostream>

using namespace std;

int main() {
    float importe;
    cout << "Introduce el importe bruto: ";
    cin >> importe;
    cout << "Importe neto: ";

    if (importe > 15000) {
        cout << (((importe / 100.00) * 16.00) + importe);
    } else {
        cout << (((importe / 100.00) * 10.00) + importe);
    }

    return 0;
}