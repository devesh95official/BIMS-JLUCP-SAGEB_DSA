#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        s.pop_back();
        s.pop_back();
        s.push_back('i');
        cout << s << endl;
    }

    return 0;
}