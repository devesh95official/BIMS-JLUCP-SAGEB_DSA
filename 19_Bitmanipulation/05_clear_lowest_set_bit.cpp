#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned x = 0b1011000;
    cout << "x: " << bitset<8>(x) << "\n";
    unsigned before = x;
    x &= (x - 1);
    cout << "after clearing lowest set bit: " << bitset<8>(x) << "\n";
    cout << "cleared bit: " << bitset<8>(before ^ x) << "\n";
    return 0;
}
