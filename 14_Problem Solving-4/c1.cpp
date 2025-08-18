//https://www.codechef.com/problems/MDGT

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int>v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        if (v[i] >= v[n - 1]) {
            cout << (n - 1) - i << endl;
            return;
        }
    }
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}