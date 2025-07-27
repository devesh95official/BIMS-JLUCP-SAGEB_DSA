#include <iostream>

using namespace std;

// reverse the number

int main() {

    int n;
    cin >> n;

    while (n) {
        cout << n % 10;
        n /= 10;
    }

    return 0;
}