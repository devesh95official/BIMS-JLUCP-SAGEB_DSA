//https://www.codechef.com/problems/FENCECOL

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int>v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int cnt1 = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] == 1)cnt1++;
        }
        int ans1 = n - cnt1;
        int ans2;
        map<int, int>mp;
        for (int i = 0; i < n; i++) {
            mp[v[i]]++;
        }
        int maxi = 0;
        int who = 1;
        for (auto x : mp) {
            if (maxi < x.second) {
                who = x.first;
            }
            maxi = max(maxi, x.second);
        }
        if (who == 1) {
            ans2 = INT_MAX;
        }
        else {
            ans2 = 1 + (n - maxi);
        }
        cout << min(ans1, ans2) << endl;
    }

    return 0;
}