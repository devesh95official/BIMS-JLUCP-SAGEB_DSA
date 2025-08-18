// https://codeforces.com/problemset/problem/119/A
#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main() {
    int a, b, n, turn = 0;
    cin >> a >> b >> n;
    while (true) {
        if (turn % 2 == 0) n -= gcd(a, n);
        else n -= gcd(b, n);
        if (n < 0) break;
        turn++;
    }
    cout << (turn % 2 == 0 ? 1 : 0) << endl;
    return 0;
}
