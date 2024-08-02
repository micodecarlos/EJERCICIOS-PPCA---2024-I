//ESTUDIANTE: CARLOS APAZA FLORES

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> ordenacion_topologica(int n, const vector<pair<int, int>>& dependencias) {
    vector<vector<int>> grafo(n);
    vector<int> grado_entrada(n, 0);
    
    // Construcción del grafo y el conteo de grados de entrada
    for (const auto& dep : dependencias) {
        int u = dep.first;
        int v = dep.second;
        
        // Verificar si los nodos están dentro del rango válido
        if (u >= n || v >= n) {
            cerr << "Error: Dependencia inválida (" << u << ", " << v << ") - fuera de rango." << endl;
            return {};
        }
        
        grafo[u].push_back(v);
        grado_entrada[v]++;
    }
    
    queue<int> cola;
    
    // Agregar nodos sin dependencias a la cola
    for (int i = 0; i < n; ++i) {
        if (grado_entrada[i] == 0) {
            cola.push(i);
        }
    }
    
    vector<int> orden_topologico;
    
    // Realizar la ordenación topológica
    while (!cola.empty()) {
        int nodo = cola.front();
        cola.pop();
        orden_topologico.push_back(nodo);
        
        for (int vecino : grafo[nodo]) {
            grado_entrada[vecino]--;
            if (grado_entrada[vecino] == 0) {
                cola.push(vecino);
            }
        }
    }
    
    // Comprobar si se pudo realizar una ordenación completa
    if (orden_topologico.size() == n) {
        return orden_topologico;
    } else {
        return {};
    }
}

int main() {
    int n = 5; // Cambiado a 5 para incluir el nodo 4
    vector<pair<int, int>> dependencias = {{0, 1}, {1, 2}, {3, 1}, {3, 4}};
    
    vector<int> resultado = ordenacion_topologica(n, dependencias);
    
    if (!resultado.empty()) {
        cout << "Orden topologico: ";
        for (int nodo : resultado) {
            cout << nodo << " ";
        }
        cout << endl;
    } else {
        cout << "No es posible ordenar las tareas debido a un ciclo." << endl;
    }
    
    return 0;
}
