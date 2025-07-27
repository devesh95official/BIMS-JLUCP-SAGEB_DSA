//prints n numbers from 1 to n using while loop
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    return 0;
}