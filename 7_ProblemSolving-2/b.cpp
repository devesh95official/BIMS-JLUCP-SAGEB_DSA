#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        vector<string> a(3);
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        string s = "";
        for (int i = 0; i < 3; i++) {
            s.push_back(a[i][0]);
        }
        cout << s << endl;
    }

    return 0;
}