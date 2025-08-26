#include <bits/stdc++.h>
using namespace std;

unsigned gray(unsigned n) { return n ^ (n >> 1); }
unsigned gray_to_binary(unsigned g) {
    unsigned n = 0;
    for (; g; g >>= 1) n ^= g;
    return n;
}

int main() {
    cout << "first 16 gray codes:\n";
    for (unsigned i = 0; i < 16; ++i) {
        unsigned g = gray(i);
        cout << i << " -> " << g << " -> " << gray_to_binary(g) << '\n';
    }
    return 0;
}
