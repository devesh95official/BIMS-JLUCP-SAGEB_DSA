#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int m = n * (n - 1) / 2;
        vector<int>v(m);
        for (int i = 0; i < m; i++) {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            ans += v[i];
        }
        cout << ans << endl;
    }

    return 0;
}