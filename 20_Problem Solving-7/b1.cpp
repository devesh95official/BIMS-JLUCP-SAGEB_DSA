#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string ls = s, rs = s;
        rs = rs[rs.size() - 1] + rs;
        rs.pop_back();
        ls.push_back(ls[0]);
        ls.erase(0, 1);

        if (ls == rs)cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}