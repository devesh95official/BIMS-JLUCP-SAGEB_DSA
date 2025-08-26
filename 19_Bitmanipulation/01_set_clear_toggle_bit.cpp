#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned x = 0b0101; // 5
    cout << "Original: " << bitset<8>(x) << " (" << x << ")\n";

    // Set bit 3 (zero-indexed)
    x |= (1u << 3);
    cout << "After set bit 3: " << bitset<8>(x) << " (" << x << ")\n";

    // Clear bit 0
    x &= ~(1u << 0);
    cout << "After clear bit 0: " << bitset<8>(x) << " (" << x << ")\n";

    // Toggle bit 2
    x ^= (1u << 2);
    cout << "After toggle bit 2: " << bitset<8>(x) << " (" << x << ")\n";

    return 0;
}
