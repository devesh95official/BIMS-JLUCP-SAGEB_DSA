//https://www.codechef.com/problems/PLACE0110

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << min(x, y) * 2 + 2 * abs(x - y) 
        - (abs(x - y) != 0) << endl;
    }

    return 0;
}