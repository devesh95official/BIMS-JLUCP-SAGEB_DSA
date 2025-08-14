// calculator
#include <bits/stdc++.h>

using namespace std;


// function
int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    return a / b;
}

int main() {

    int a, b;
    cin >> a >> b;

    char op;
    cin >> op;

    if (op == '+') {
        cout << 4 * add(a, b) << endl;
    }
    else if (op == '-') {
        cout << sub(a, b) << endl;
    }
    else if (op == '*') {
        cout << mul(a, b) << endl;
    }
    else {
        cout << divide(a, b) << endl;
    }
    return 0;
}