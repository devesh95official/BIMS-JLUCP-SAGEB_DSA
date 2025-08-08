// Problem link: https://codeforces.com/contest/1703/problem/A
#include <bits/stdc++.h>
using namespace std;

// 1703A - YES or YES?
// Problem: Given a length-3 string s, check if it equals "YES" case-insensitively.
// Approach: Normalize to lowercase (or uppercase) and compare to "yes" (or "YES").
// Complexity: O(1) per test case.

int main() {
    int t; 
    cin >> t;
    while (t--) {
        string s; 
        cin >> s;
        for (char &ch : s) ch = (char)tolower(ch);
        cout << (s == "yes" ? "YES" : "NO") << "\n";
    }
    return 0;
}
