//ESTUDIANTE: CARLOS APAZA FLORES

// Numeros factoriales

#include <iostream>

using namespace std;

int main() {
    int numero;
    long long factorial = 1; // Usamos long long para manejar números grandes
    
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El factorial no está definido para numeros negativos." << endl;
    } else {
        for (int i = 1; i <= numero; ++i) {
            factorial *= i; // Calculamos el factorial
        }
        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }
    
    return 0;
}
