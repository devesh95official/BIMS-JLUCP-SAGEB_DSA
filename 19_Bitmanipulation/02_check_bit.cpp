#include <bits/stdc++.h>
using namespace std;

bool is_bit_set(unsigned x, unsigned pos) {
    return (x & (1u << pos)) != 0;
}

int main() {
    unsigned x = 0b10110; // 22
    for (unsigned i = 0; i < 6; ++i)
        cout << "bit " << i << ": " << (is_bit_set(x, i) ? '1' : '0') << '\n';
    return 0;
}
