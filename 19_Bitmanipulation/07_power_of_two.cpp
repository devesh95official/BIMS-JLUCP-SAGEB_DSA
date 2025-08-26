#include <bits/stdc++.h>
using namespace std;

bool is_power_of_two(unsigned x) { return x != 0 && ((x & (x - 1)) == 0); }

unsigned next_power_of_two(unsigned x) {
    if (x <= 1) return 1u;
    --x;
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    return x + 1;
}

int main() {
    unsigned arr[] = {0,1,2,3,5,16,31,64};
    for (unsigned v : arr)
        cout << v << ": is_pow2=" << (is_power_of_two(v) ? "yes" : "no") << ", next=" << next_power_of_two(v) << '\n';
    return 0;
}
