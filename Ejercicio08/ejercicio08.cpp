//ESTUDIANTE: CARLOS APAZA FLORES

// Dado un numero mostrar la suma de sus digitos

#include <iostream>

using namespace std;

int main() {
    int numero;
    int suma = 0;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    // Convertimos el número a positivo si es negativo
    numero = abs(numero);

    while (numero > 0) {
        suma += numero % 10; // Sumamos el último dígito
        numero /= 10;        // Eliminamos el último dígito
    }

    cout << "La suma de los digitos es: " << suma << endl;

    return 0;
}
