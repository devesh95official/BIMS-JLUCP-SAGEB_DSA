#include <bits/stdc++.h>

using namespace std;



int main() {
    int a = 1 << 6;
    cout << a << endl;
    int b = a >> 2;
    cout << b << endl;
    b <<= (3 << 1);
    cout << b << endl;
    cout << (bitset<16>)b << endl;
    return 0;
}