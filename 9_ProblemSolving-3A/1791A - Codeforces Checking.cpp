// Problem link: https://codeforces.com/contest/1791/problem/A
#include <bits/stdc++.h>
using namespace std;

// 1791A - Codeforces Checking
// Problem: Given a lowercase character c, check if it appears in the string "codeforces".
// Approach: Use string::find or a set to check membership; print YES/NO accordingly.
// Complexity: O(1) per test case.

int main() {
    string allowed = "codeforces";
    int t;
    cin >> t;
    while (t--) {
        char c;
        cin >> c;
        if (c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 's') {
            cout << "YES\n";
        } 
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
