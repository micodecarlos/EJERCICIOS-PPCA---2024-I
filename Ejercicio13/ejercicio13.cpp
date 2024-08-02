//ESTUDIANTE: CARLOS APAZA FLORES

//Dado un arreglo de enteros únicos, genera todos los subconjuntos posibles (potencia de conjunto) 

#include <iostream>
#include <vector>

using namespace std;

void generateSubsets(vector<int>& nums, int index, vector<int>& current, vector<vector<int>>& result) {
    // Agregar el subconjunto actual al resultado
    result.push_back(current);
    
    for (int i = index; i < nums.size(); i++) {
        // Incluir el elemento nums[i] en el subconjunto actual
        current.push_back(nums[i]);
        // Generar todos los subconjuntos que incluyen nums[i]
        generateSubsets(nums, i + 1, current, result);
        // Excluir el elemento nums[i] del subconjunto actual (backtracking)
        current.pop_back();
    }
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> current;
    generateSubsets(nums, 0, current, result);
    return result;
}

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = subsets(nums);
    
    // Imprimir todos los subconjuntos
    for (const auto& subset : result) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }
    
    return 0;
}
