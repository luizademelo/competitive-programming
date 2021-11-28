// accepted 

#include <iostream>

using namespace std;

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     int n; cin >> n;
     int la,lb; cin >> la >> lb;
     int sa,sb; cin >> sa >> sb;

     if(n >= la && n <= lb && n >= sa && n <= sb)
        cout << "possivel";
    else
        cout << "impossivel";
    cout << "\n";

    return 0;
}
