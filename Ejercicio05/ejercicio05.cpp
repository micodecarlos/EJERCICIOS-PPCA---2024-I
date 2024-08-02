
//EESTUDIANTE: CARLOS APAZA FLORES

// Dado tres numeros enteros, encuentra el mayor

#include <iostream>

int main() {
    int num1, num2, num3;
    
    std::cout << "Ingrese tres numeros enteros: ";
    std::cin >> num1 >> num2 >> num3;
    
    int mayor = num1;
    
    if (num2 > mayor) {
        mayor = num2;
    }
    
    if (num3 > mayor) {
        mayor = num3;
    }
    
    std::cout << "El mayor de los tres numeros es: " << mayor << std::endl;
    
    return 0;
}
