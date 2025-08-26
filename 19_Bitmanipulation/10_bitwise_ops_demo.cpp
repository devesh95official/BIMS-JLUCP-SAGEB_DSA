#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned a = 0b1100, b = 0b1010;
    cout << "a = " << bitset<8>(a) << " b = " << bitset<8>(b) << '\n';
    cout << "a & b = " << bitset<8>(a & b) << '\n';
    cout << "a | b = " << bitset<8>(a | b) << '\n';
    cout << "a ^ b = " << bitset<8>(a ^ b) << '\n';
    cout << "~a = " << bitset<8>(~a) << " (low 8 bits)\n";

    unsigned x = 5, y = 9;
    cout << "before swap x=" << x << " y=" << y << '\n';
    x ^= y; y ^= x; x ^= y;
    cout << "after swap x=" << x << " y=" << y << '\n';
    return 0;
}
