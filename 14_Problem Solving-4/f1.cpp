//https://www.codechef.com/problems/RURT

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int x, y;
    cin >> x >> y;
    
    if (x >= y)cout << 0;
    else cout << y / x - (y % x == 0);
}
