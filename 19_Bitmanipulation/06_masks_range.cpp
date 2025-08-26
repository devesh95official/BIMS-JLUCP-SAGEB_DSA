#include <bits/stdc++.h>
using namespace std;

unsigned mask_low_n(unsigned n) {
    if (n >= 32) return 0xFFFFFFFFu;
    return (1u << n) - 1u;
}

unsigned mask_range(unsigned l, unsigned r) {
    if (l > r || r >= 32) return 0;
    return mask_low_n(r + 1) & ~mask_low_n(l);
}

int main() {
    unsigned m = mask_range(3,7);
    cout << "mask [3..7]: " << bitset<8>(m) << "\n";
    return 0;
}
