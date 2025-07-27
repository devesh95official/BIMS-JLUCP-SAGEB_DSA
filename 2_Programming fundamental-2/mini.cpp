#include <bits/stdc++.h>

using namespace std;


int main() {

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mini = INT_MAX;

    for (int i = 0; i < n; i++) {
        // mini = min(mini, arr[i]);// minimum
        if (arr[i] < mini) {
            mini = arr[i];
        }
    }

    cout << mini << endl;

    return 0;
}