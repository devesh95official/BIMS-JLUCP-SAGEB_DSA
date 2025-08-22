// div-3 (21-08-25)

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int m;
        cin >> m;
        string b, c;
        cin >> b >> c;
        deque<char> ans;
        for (int i = 0; i < n; i++) {
            ans.push_back(a[i]);
        }
        for (int i = 0; i < m; i++) {
            if (c[i] == 'D')ans.push_back(b[i]);
            else ans.push_front(b[i]);
        }
        for (auto x : ans)cout << x;
        cout << endl;
    }

    return 0;
}