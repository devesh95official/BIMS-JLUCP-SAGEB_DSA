// https://codeforces.com/problemset/problem/1475/A
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        while (n % 2 == 0) n /= 2;
        cout << (n > 1 ? "YES" : "NO") << endl;
    }
    return 0;
}
