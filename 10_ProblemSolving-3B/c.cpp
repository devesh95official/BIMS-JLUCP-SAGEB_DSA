#include <bits/stdc++.h>

using namespace std;

void solve() {

    int n, c;
    cin >> n >> c;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int buy = 0;

    //lamda function
    auto sad = [&]()->bool {
        for (int i = 0; i < n; i++) {
            if (arr[i] == c)return true;
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] < c)return false;
        }
        return true;
    };

    while (sad())buy++, c++;

    cout << buy << endl;
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}