#include <iostream>

using namespace std;

float a;
int b;
float suma;

int main(){
    cout << "Ingresa un número con decimales: ";
    cin >> a;

    cout << "Ingresa un número entero: ";
    cin >> b;
    suma = a + b;

    cout << "El resultado de la suma es: " << suma;

    return 0;

}