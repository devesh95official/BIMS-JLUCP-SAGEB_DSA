#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int v[n];
    forn(i, n)cin >> v[i];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        if (sum / (i + 1) < 40) {
            no;
            return;
        }
    }
    yes;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}