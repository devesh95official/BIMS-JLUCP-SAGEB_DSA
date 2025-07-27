#include <bits/stdc++.h>

using namespace std;


int main() {

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        // maxi = max(maxi, arr[i]);// maximum
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }

    cout << maxi << endl;

    return 0;
}