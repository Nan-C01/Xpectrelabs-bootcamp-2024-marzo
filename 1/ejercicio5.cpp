#include <iostream>

using namespace std;

int main() {
    float fahrenheit;
    float celsius;

    cout << "Ingresa la temperatura en escala Fahrenheit: ";
    cin >> fahrenheit;

    celsius = ( 5.0 / 9.0 ) * ( fahrenheit - 32.0 );

    cout << "La temperatura en escala Celsius es: " << celsius;

    getchar();

    return 0;
}