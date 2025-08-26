#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned x = 0b1011000;
    cout << "x: " << bitset<8>(x) << "\n";
    unsigned isolated = x & -x;
    cout << "isolated lowest set bit: " << bitset<8>(isolated) << "\n";
    return 0;
}
