#include <bits/stdc++.h>

using namespace std;


int main() {

    int arr[] = {5, 1, 15, 11111115, 1115};
    vector<int>v = {1, 2, 4, 3, 5};

    sort(arr, arr + 5);

    sort(v.begin(), v.end());

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << v[i] << ' ';
    }
    return 0;
}