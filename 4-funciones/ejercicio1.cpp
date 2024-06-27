// Creación de una función que retorna el mayor de 3 números enteros recibidos en sus parámetros

#include <iostream>

using namespace std;

// No imprime dentro de la función
int retornarNumeroMayorA(int a, int b, int c)
{
    int highest;

    if (a > b && a > c){
        highest = a;
    } else if (b > a && b > c){
        highest = b;
    } else {
        highest = c;
    }

    cout << "Número mayor: ";
    return highest;
}

// La función imprime
int retornarNumeroMayorB(int a, int b, int c)
{
    int highest;

    if (a > b && a > c){
        highest = a;
    } else if (b > a && b > c){
        highest = b;
    } else {
        highest = c;
    }
    cout << "Número mayor: " << highest;
    return highest;
}

int main() {

    cout << retornarNumeroMayorA(1, 2, 3);
    cout << "\n";
    retornarNumeroMayorB(6, 8, 3);

    return 0;
}