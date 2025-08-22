//https://codeforces.com/problemset/problem/1703/B

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        set<char> st;

        for (int i = 0; i < n; i++) {
            st.insert(s[i]);
        }

        cout << st.size() + n << endl;

        // int ans = 0;

        // map<char, int>mp;

        // for (int i = 0; i < n; i++) {
        //     mp[s[i]]++;
        // }

        // for (auto x : mp) {
        //     cout << x.first << " " << x.second << endl;
        // }

        // for (auto x : mp) {
        //     ans += (x.second + 1);
        // }

        // cout << ans << endl;

        // set<char> st;

        // int ans = 0;

        // for (int i = 0; i < n; i++) {
        //     if (st.count(s[i])) {
        //         ans++;
        //     }
        //     else {
        //         ans += 2;
        //         st.insert(s[i]);
        //     }
        // }

        // cout << ans << endl;

        // sort(s.begin(), s.end());

        // int ans = 1;

        // char c = s[0];

        // for (int i = 0; i < n; i++) {
        //     if (c == s[i]) {
        //         ans++;
        //     }
        //     else {
        //         ans += 2, c = s[i];
        //     }
        // }
        // cout << ans << endl;

    }

    return 0;
}