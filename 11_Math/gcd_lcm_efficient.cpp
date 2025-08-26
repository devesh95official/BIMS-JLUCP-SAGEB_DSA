// Efficient GCD (Euclid) and LCM
#include <bits/stdc++.h>
using namespace std;

int gcd_euclid(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm_from_gcd(int a, int b) {
    int g = gcd_euclid(a, b);
    return (a / g) * b;
}

int main() {
    int a, b;
    if (!(cin >> a >> b)) return 0;
    if (a <= 0 || b <= 0) return 0;
    cout << gcd_euclid(a, b) << "\n";
    cout << lcm_from_gcd(a, b) << "\n";
    return 0;
}


