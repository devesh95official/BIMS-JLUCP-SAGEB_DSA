#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=10;
    vector<int> v(n,5);
    int sum = 0;
    // O(n): Summing all elements
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    cout << "Sum: " << sum << endl;
    return 0;
}
