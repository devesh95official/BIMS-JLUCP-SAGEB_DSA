#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned x = 0b101101001;
    cout << "Value: " << bitset<16>(x) << "\n";
    cout << "Set bits: " << __builtin_popcount(x) << "\n";
    return 0;
}
