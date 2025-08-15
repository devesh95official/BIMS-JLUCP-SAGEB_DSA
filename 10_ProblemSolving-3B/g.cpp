#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int minA = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            minA = min(minA, arr[i] + arr[i + 1] / 2);
        }
        
        sort(arr, arr + n);
        int minB = arr[0] + arr[1];
        
        cout << min(minA, minB) << endl;
        
    }

    return 0;
}