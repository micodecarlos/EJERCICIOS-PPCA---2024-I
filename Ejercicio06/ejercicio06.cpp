//ESTUDIANTE: CARLOS APAZA FLORES

// Dado un numero determina si es par o impar

#include <iostream>

using namespace std;

int main() {
    int numero;
    
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    
    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es par." << endl;
    } else {
        cout << "El numero " << numero << " es impar." << endl;
    }
    
    return 0;
}
