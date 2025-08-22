//https://codeforces.com/problemset/problem/4/C

#include <bits/stdc++.h>

using namespace std;



int main() {

    int n;
    cin >> n;

    map<string, int>mp;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (mp[s]) {
            cout << s << mp[s] << endl;
        }
        else {
            cout << "OK\n";
        }
        mp[s]++;
    }

    // multiset<string> st;

    // for (int i = 0; i < n; i++) {
    //     string s;
    //     cin >> s;
    //     if (st.count(s)) {
    //         cout << s << st.count(s) << endl;
    //     }
    //     else {
    //         cout << "OK\n";
    //     }
    //     st.insert(s);
    // }

    return 0;
}