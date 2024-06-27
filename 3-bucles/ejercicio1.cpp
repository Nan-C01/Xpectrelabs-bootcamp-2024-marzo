// Realiza un programa que muestre los primeros 100 números enteros iniciando desde el 1.

#include <iostream>

using namespace std;

int main() {
    
    int i = 1;
    while (i < 101) {
        cout << i << "\n";
        i++;
    }

    i = 1;
    do {
        cout << i << "\n";
        i++;
    } while (i <= 100);


    for (int i = 1; i <= 100; i++) {
        cout << i << "\n";
    }



    return 0;
}