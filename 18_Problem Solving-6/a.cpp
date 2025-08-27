// last question assissment-1

#include <bits/stdc++.h>

using namespace std;

// 1 2 3 4 5 6 
// 2 2 3 4 5 6 
// 3 3 3 4 5 6 
// 4 4 4 4 5 6 
// 5 5 5 5 5 6 
// 6 6 6 6 6 6 

int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << max(i, j) << ' ';
        }
        cout << endl;
    }

    return 0;
}