//https://www.codechef.com/problems/STICKCOMP

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int>v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int ita_number = 1, ita_size = v[0];

        for (int i = 0; i < n; i++) {
            if (v[i] > ita_size) {
                ita_number = i + 1;
                ita_size = v[i];
            }
        }

        cout << ita_number << endl;
    }

    return 0;
}