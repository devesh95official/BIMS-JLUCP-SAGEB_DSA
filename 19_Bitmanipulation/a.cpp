#include <bits/stdc++.h>

using namespace std;



int main() {

    int x = 0b100000000101; // representation
    int y = 0b100000000110;
    int z = x & y;
    int z1 = x | y;
    int z2 = x ^ y;
    cout << x << " " << y << endl;
    cout << z << " " << z1 << " " << z2 << endl;
    cout << (bitset<16>)x << endl;

    bitset<16> bt1, bt2, bt3;
    bt1 = 6;
    bt2 = 15;
    cout << bt1 << " " << bt2 << endl;
    bt3 = bt1 & bt2;
    cout << bt3 << endl;
    cout << ~bt1 << endl;

    for (int i = 0; i < 16; i++) {
        cout << bt3[i] << " ";
    }
    cout << endl;

    int a = 20;
    cout << (bitset<16>)a << endl;

    return 0;
}