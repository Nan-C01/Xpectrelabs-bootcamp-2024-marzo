// 3.- Realiza un programa que muestre únicamente los números pares en el rango del 1 al 100

#include <iostream>

using namespace std;

int main() {
    
    int i = 2;
    while (i < 101) {
        cout << i << "\n";
        i++;
        i++;
    }

    i = 2;
    do {
        cout << i << "\n";
        i += 2;
    } while (i <= 100);


    for (int i = 2; i <= 100; i += 2) {
        cout << i << "\n";
    }

    return 0;
}