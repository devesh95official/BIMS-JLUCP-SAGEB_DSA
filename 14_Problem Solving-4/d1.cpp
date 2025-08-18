//https://www.codechef.com/problems/MXON

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt = 0;
        int temp = 0;
        int cnt1 = 0;
        for (int i = 0; i < n; i++) {
            cnt1 += (s[i] == '1');
            temp += (s[i] == '0');
            if (s[i] == '1')cnt += temp, temp = 0;
        }// counting 0 before last 1;
        if (cnt <= k)cout << cnt1 + cnt << endl;
        else cout << cnt1 + (k) << endl;
    }

    return 0;
}