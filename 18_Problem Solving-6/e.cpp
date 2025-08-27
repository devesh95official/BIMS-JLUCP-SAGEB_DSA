//https://www.codechef.com/problems/BIG

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<int> ans(n, 1);
        int maxi = v[0];
        for (int i = 0; i < n; i++) {
            if (maxi > v[i])ans[i] = 0;
            maxi = max(maxi, v[i]);
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
