//print even numbers from 2 to n
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}