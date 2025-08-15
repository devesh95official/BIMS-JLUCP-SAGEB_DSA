#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;
    
    //lamda function
    auto solve = [&]() {
        int n, c;
        cin >> n >> c;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            cout << arr[i] << " ";
        }
        cout << endl;
    };

    while (t--) {
        solve();
    }

    return 0;
}