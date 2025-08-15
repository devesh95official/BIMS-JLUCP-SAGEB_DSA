//https://codeforces.com/contest/1923/problem/A

#include <bits/stdc++.h>

using namespace std;

void solve() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    auto condition = [&]()->bool {
        
        int cnt = 0;
        int i = 0;
        
        while (i < n) {
            if (arr[i]) {
                cnt++;
                while (i < n && arr[i])i++;
            }
            else {
                while (i < n && !arr[i])i++;
            }
        }
        if (cnt <= 1)return true;
        
        int idx0 = 0, idx1 = 0;
        
        for (int i = 0; i < n; i++) {
            if (arr[i])idx1 = i;
        }
        
        for (int i = 0; i < idx1; i++) {
            if (!arr[i])idx0 = i;
        }
        
        swap(arr[idx1], arr[idx0]);
        
        return false;
    };

    int move = 0;

    while (condition() == false) {
        move++;
    }

    cout << move << endl;
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}