// 2.- Realiza un programa que muestre los primeros 100 números de forma inversa, es decir, del 100 al 1

#include <iostream>

using namespace std;

int main() {
     
    int i = 100;
    while (i >= 1) {
        cout << i << "\n";
        i--;
    }

    i = 100;
    do {
        cout << i << "\n";
        i--;
    } while (i >= 1);


    for (int i = 100; i >= 1; i--) {
        cout << i << "\n";
    }
    return 0;
}