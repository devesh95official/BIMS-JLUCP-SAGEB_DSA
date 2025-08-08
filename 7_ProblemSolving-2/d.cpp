#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;
        string c = a;
        a[0] = b[0];
        b[0] = c[0];
        cout << a << " " << b << endl;
    }

    return 0;
}