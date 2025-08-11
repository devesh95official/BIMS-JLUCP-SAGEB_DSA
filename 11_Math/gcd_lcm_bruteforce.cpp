// Brute-force GCD and LCM 
#include <bits/stdc++.h>
using namespace std;

int gcd_brute(int a, int b) {
    int m = min(a, b);
    for (int i = m; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) return i;
    }
    return 1;
}

int lcm_brute(int a, int b) {
    int x = max(a, b);
    while (true) {
        if (x % a == 0 && x % b == 0) return x;
        x++;
    }
}

int main() {
    int a, b;
    if (!(cin >> a >> b)) return 0;
    if (a <= 0 || b <= 0) return 0;
    cout << gcd_brute(a, b) << "\n";
    cout << lcm_brute(a, b) << "\n";
    return 0;
}


