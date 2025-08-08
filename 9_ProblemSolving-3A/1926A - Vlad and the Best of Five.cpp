// Problem link: https://codeforces.com/contest/1926/problem/A
#include <bits/stdc++.h>
using namespace std;

// 1926A - Vlad and the Best of Five
// Problem: Given a string s of length 5 containing only 'A' and 'B', output the character that appears more times.
// Approach: Count occurrences of 'A' and 'B' and compare.
// Complexity: O(1) per test case.

int main() {
    int t; 
    cin >> t;
    while (t--) {
        string s; 
        cin >> s;
        int cntA = 0, cntB = 0;
        for (char ch : s) {
            if (ch == 'A') cntA++; 
            else if (ch == 'B') cntB++;
        }
        cout << (cntA > cntB ? 'A' : 'B') << "\n";
    }
    return 0;
}
