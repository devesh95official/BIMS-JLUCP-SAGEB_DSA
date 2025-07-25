#include <iostream>

using namespace std;


int main() {

    int a;
    a = 9;  // -2^31 --- 2^31-1

    int b;
    cin >> b; // input from user

    cout << a << " " << b << endl;

    int c = a + b;

    cout << c << endl;

    return 0;
}