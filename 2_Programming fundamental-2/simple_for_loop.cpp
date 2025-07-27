// uses of for loop in C++
#include <iostream>
using namespace std;

int main() {
    // Example 1: Print numbers from 1 to 5
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Example 2: Calculate the sum of first 5 natural numbers
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += i;
    }
    cout << "Sum: " << sum << endl;

    return 0;
}