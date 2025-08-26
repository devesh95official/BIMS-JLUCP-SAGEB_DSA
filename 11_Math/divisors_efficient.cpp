// Divisors using sqrt trick 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; if (!(cin >> n)) return 0;
    if (n <= 0) return 0;
    vector<int> d;
    for (int i = 1; i * i <= n; i++) if (n % i == 0) {
        d.push_back(i);
        if (i != n / i) d.push_back(n / i);
    }
    sort(d.begin(), d.end());
    for (int i = 0; i < (int)d.size(); i++) {
        if (i) cout << ' ';
        cout << d[i];
    }
    cout << "\n";
    return 0;
}


