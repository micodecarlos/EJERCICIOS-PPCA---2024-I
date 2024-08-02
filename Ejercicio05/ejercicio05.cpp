
//EESTUDIANTE: CARLOS APAZA FLORES

// Dado tres numeros enteros, encuentra el mayor

#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;
    
    cout << "Ingrese tres numeros enteros: ";
    cin >> num1 >> num2 >> num3;
    
    int mayor = num1;
    
    if (num2 > mayor) {
        mayor = num2;
    }
    
    if (num3 > mayor) {
        mayor = num3;
    }
    
    cout << "El mayor de los tres numeros es: " << mayor << endl;
    
    return 0;
}

