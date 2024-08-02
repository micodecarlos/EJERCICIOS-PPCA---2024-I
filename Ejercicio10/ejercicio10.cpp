//ESTUDIANTE: CARLOS APAZA FLORES

/*dado un arreglo de enteros hallar el producto máximo
de 3 numero diferentes*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int nums[1000];
    for (int i = 0; i < n; ++i) cin >> nums[i];

    int max1 = 0, max2 = 0, max3 = 0;

    for (int i = 0; i < n; ++i) {
        if (nums[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = nums[i];
        } else if (nums[i] > max2) {
            max3 = max2;
            max2 = nums[i];
        } else if (nums[i] > max3) {
            max3 = nums[i];
        }
    }

    int maxProduct = max1 * max2 * max3;
    cout << maxProduct << endl;

    return 0;
}
