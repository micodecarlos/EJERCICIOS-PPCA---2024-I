//ESTUDIANTE: CARLOS APAZA FLORES

//En c++. Dado una matriz cuadrada de nxn, escribe una función que rote la matriz 90 grados en sentido horario y devuelva la matriz rotadla.

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> rotateMatrix90Degrees(vector<vector<int>>& matrix) {
    int n = matrix.size();
    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    // Step 2: Reverse the rows
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
    
    return matrix;
}

int main() {
    // Example usage
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    vector<vector<int>> rotatedMatrix = rotateMatrix90Degrees(matrix);
    
    // Print the rotated matrix
    for (int i = 0; i < rotatedMatrix.size(); i++) {
        for (int j = 0; j < rotatedMatrix[i].size(); j++) {
            cout << rotatedMatrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
