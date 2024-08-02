// ESTUDIANTE: CARLOS APAZA FLORES

/* Dado una matriz cuadrada de nxn, escribe una funcion que rote
la matriz 90 grados en sentido horario y devuelve la matriz*/

#include <iostream>
#include <vector>

using namespace std;

// Función para rotar la matriz 90 grados en sentido horario
vector<vector<int>> rotarMatriz90Grados(const vector<vector<int>>& matriz) {
    int n = matriz.size();
    vector<vector<int>> matrizRotada(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrizRotada[j][n - 1 - i] = matriz[i][j];
        }
    }

    return matrizRotada;
}

// Función para imprimir la matriz
void imprimirMatriz(const vector<vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (int elem : fila) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main() {
    // Ejemplo de uso
    vector<vector<int>> matriz = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Matriz original:" << endl;
    imprimirMatriz(matriz);

    vector<vector<int>> matrizRotada = rotarMatriz90Grados(matriz);

    cout << "Matriz rotada 90 grados en sentido horario:" << endl;
    imprimirMatriz(matrizRotada);

    return 0;
}
