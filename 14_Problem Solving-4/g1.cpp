//https://www.codechef.com/problems/XLSL

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;
    while (t--) {
        int x, y, z, a, b, c;
        cin >> x >> y >> z >> a >> b >> c;
        int ans = 0;
        if (c > z)ans += z, z = 0;
        else ans += c, z -= c;
        y += z;
        if (b > y)ans += y, y = 0;
        else ans += b, y -= b;
        x += y;
        if (a > x)ans += x, x = 0;
        else ans += a, x -= a;
        cout << ans << endl;
    }

    return 0;
}