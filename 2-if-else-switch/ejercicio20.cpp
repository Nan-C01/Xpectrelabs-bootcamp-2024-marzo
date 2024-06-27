// Que calcule el sueldo que le corresponde al trabajador de una empresa que cobra 40.000 euros anuales.
// El programa debe realizar los cálculos en función de los siguientes criterios:
// a.      Si lleva más de 10 años en la empresa se le aplica un aumento del 10%.
// b.      Si lleva menos de 10 años pero más que 5 se le aplica un aumento del 7%.
// c.      Si lleva menos de 5 años pero más que 3 se le aplica un aumento del 5%.
// d.      Si lleva menos de 3 años se le aplica un aumento del 3%.



#include <iostream>

using namespace std;

int main() {
    float years;
    int salario = 40000;
    cout << "Salario base del trabajador: 40,000 euros al año." << endl << "¿Cuántos años lleva trabajando el empleado? ";
    cin >> years;
    cout << "Salario correspondiente: ";

    if (years >= 10) {
        cout << (((salario / 100) * 10) + salario);
    } else if (years < 10 && years >= 5) {
        cout << (((salario / 100) * 7) + salario);
    } else if (years < 5 && years >= 3) {
        cout << (((salario / 100) * 5) + salario);
    } else {
        cout << (((salario / 100) * 3) + salario);
    }
    return 0;
}