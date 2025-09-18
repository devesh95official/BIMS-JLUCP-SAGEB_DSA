#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a = (n / 3) * 5;
        if (n % 3 == 0)cout << a << endl;
        else if (n % 3 == 1)cout << a + 3 << endl;
        else cout << a + 4 << endl;
    }

    return 0;
}