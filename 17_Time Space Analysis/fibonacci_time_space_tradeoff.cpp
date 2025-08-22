#include <iostream>
#include <vector>
using namespace std;

// Plain recursive Fibonacci (low space, high time)
int fib_recursive(int n) {
    if (n <= 1) return n;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

// Memoized Fibonacci (higher space, lower time)
int fib_memo(int n, vector<int>& memo) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    memo[n] = fib_memo(n - 1, memo) + fib_memo(n - 2, memo);
    return memo[n];
}

int main() {
    int n = 30;
    cout << "Fibonacci of " << n << " (recursive): " << fib_recursive(n) << endl;
    vector<int> memo(n + 1, -1);
    cout << "Fibonacci of " << n << " (memoized): " << fib_memo(n, memo) << endl;
    return 0;
}
