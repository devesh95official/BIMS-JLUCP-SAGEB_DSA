// Problem link: https://codeforces.com/contest/2065/problem/A
#include <bits/stdc++.h>
using namespace std;

// 2065A - Skibidus and Amog'u
// Given a singular noun ending with "us", convert it to plural by replacing the suffix with "i".

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.size() >= 2) {
            s.replace(s.size() - 2, 2, "i");
        }
        cout << s << '\n';
    }
    return 0;
}



