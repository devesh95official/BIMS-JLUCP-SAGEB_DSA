#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int arr[5]; // O(n) extra space
    for (int i = 0; i < n; i++) {
        arr[i] = i * i;
    }
    cout << "Squares: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
