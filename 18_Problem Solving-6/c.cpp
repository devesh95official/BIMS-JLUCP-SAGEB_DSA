//B codechef (Opposite Attract)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0')cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
    return 0;
}
