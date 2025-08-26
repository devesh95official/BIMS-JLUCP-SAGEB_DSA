#include <bits/stdc++.h>
using namespace std;

template<typename T>
T rotl(T x, unsigned r) {
    const unsigned bits = sizeof(T) * 8;
    r %= bits;
    return (x << r) | (x >> (bits - r));
}

template<typename T>
T rotr(T x, unsigned r) {
    const unsigned bits = sizeof(T) * 8;
    r %= bits;
    return (x >> r) | (x << (bits - r));
}

int main() {
    uint32_t x = 0x12u;
    cout << "x: 0x" << hex << x << dec << "\n";
    cout << "rotl 4: 0x" << hex << rotl(x,4) << dec << "\n";
    cout << "rotr 4: 0x" << hex << rotr(x,4) << dec << "\n";
    return 0;
}
