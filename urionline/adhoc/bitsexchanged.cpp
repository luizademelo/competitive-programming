// accepted

#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int v; cin >> v; 
    int t = 1; 
    while(v)
    {
        cout << "Teste " << t << '\n'; 
        cout << v/50 << " "; 
        v -= 50*(v/50); 
        cout << v/10 << " "; 
        v -= 10*(v/10); 
        cout << v/5 << " "; 
        v -= 5*(v/5); 
        cout << v << "\n\n"; 
        
        
        cin >> v; 
        t++; 
    }
    
    return 0;
}
