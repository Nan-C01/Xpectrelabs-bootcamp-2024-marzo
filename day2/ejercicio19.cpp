// Que lea una hora en hora:minutos:segundos y diga la hora que es un segundo después. 


#include <iostream>

using namespace std;

int main() {
    int hrs;
    int min;
    int seg;
    cout << "Ingresa las horas, minutos y segundos de una hora determinada.\n(Si las horas son igual o superior a 24, se reestablecerán a 0.)\n";
    cout << "Horas: ";
    cin >> hrs;
    if (hrs >= 24) {
        hrs = 0;
    }
    cout << "Minutos: ";
    cin >> min;
    cout << "Segundos: ";
    cin >> seg;

    if (seg >= 60) {
        min += (seg / 60);
        seg = (seg % 60);
    }
    
    if (min >= 60) {
        hrs += (min / 60);
        min = (min % 60);
    }
    if (hrs >= 24) {
        hrs = 0;
    }

    // Sé que hay formas más apropiadas de imprimir un tiempo con el formato correcto en C++, pero aún no sé cómo, así que voy a usar algunos if/else para eso (una disculpa).
    cout << "Tu hora es ";
    if (hrs < 10) {
        cout << "0" << hrs;
    } else {
        cout << hrs;
    } 
    cout << ":";
    if (min < 10) {
        cout << "0" << min;
    } else {
        cout << min;
    } 
    cout << ":";
    if (seg < 10) {
        cout << "0" << seg;
    } else {
        cout << seg;
    } 
    cout << ".\n";

    seg++;

    if (seg >= 60) {
        min += (seg / 60);
        seg = (seg % 60);
    }
    
    if (min >= 60) {
        hrs += (min / 60);
        min = (min % 60);
    }

    cout << "Un segundo después, la hora sería ";
    if (hrs < 10) {
        cout << "0" << hrs;
    } else {
        cout << hrs;
    } 
    cout << ":";
    if (min < 10) {
        cout << "0" << min;
    } else {
        cout << min;
    } 
    cout << ":";
    if (seg < 10) {
        cout << "0" << seg;
    } else {
        cout << seg;
    } 
    cout << ".";




    return 0;
}