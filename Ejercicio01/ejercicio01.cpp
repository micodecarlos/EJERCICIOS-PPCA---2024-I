// ESTUDIANTE: CARLOS APAZA FLORES

#include <iostream>
#include <unordered_set>
#include <vector>

// Función para determinar si existen dos números en el arreglo cuya suma sea igual a K
bool hasPairWithSum(const std::vector<int>& arr, int K) {
    std::unordered_set<int> seenNumbers;

    for (int num : arr) {
        int complement = K - num;
        if (seenNumbers.find(complement) != seenNumbers.end()) {
            std::cout << "Los dos números que suman " << K << " son: " << num << " y " << complement << std::endl;
            return true;
        }
        seenNumbers.insert(num);
    }
    return false;
}

int main() {
    std::vector<int> arr = {1, 5, 2, 3};
    int K = 5;

    if (!hasPairWithSum(arr, K)) {
        std::cout << "No se encontraron dos números que sumen " << K << std::endl;
    }

    return 0;
}
