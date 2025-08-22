#include <iostream>
using namespace std;

int main() {
    int arr[3] = {1, 2, 3};
    // O(n^2): Nested loops
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i] << "," << arr[j] << " ";
        }
    }
    cout << endl;
    // O(n^3): Nested loops
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
            cout << arr[i] << "," << arr[j] << " ";
        }
    } 
    }
    cout << endl;
    
    return 0;
}
