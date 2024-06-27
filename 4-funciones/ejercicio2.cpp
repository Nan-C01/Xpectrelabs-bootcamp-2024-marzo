// Desarrolle un programa que solicite 2 números enteros al usuario,
// para que le muestre la resta y la división entre ambos valores.

#include <iostream>

using namespace std;

void restarDividir(int num1, int num2)
{
    cout << num1 << " - " << num2 << " = " << (num1 - num2);
    cout << "\n";
    cout << num1 << " / " << num2 << " = " << (num1 / num2);

}


int main() {
    
    int a;
    int b;

    cout << "Primer número: ";
    cin >> a;
    cout << "Segundo número: ";
    cin >> b;

    restarDividir(a, b);
     

    return 0;
}