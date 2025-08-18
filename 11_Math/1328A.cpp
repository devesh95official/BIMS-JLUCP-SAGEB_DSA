// https://codeforces.com/problemset/problem/1328/A
#include <iostream>
using namespace std;
int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        int rem = a % b;
        cout << (rem == 0 ? 0 : b - rem) << endl;
    }
    return 0;
}
