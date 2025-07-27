//print 2...n+1
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 2; i <= n + 1; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}   