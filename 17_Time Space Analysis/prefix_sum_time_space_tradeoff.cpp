#include <iostream>
#include <vector>
using namespace std;

// Recompute sum for each query (low space, high time )
int range_sum(const vector<int>& arr, int l, int r) {
    int sum = 0;
    for (int i = l; i <= r; i++) sum += arr[i];
    return sum;
}

// Prefix sum (higher space, lower time)
vector<int> build_prefix_sum(const vector<int>& arr) {
    vector<int> prefix(arr.size() + 1, 0);
    for (int i = 0; i < arr.size(); i++) {
        prefix[i + 1] = prefix[i] + arr[i];
    }
    return prefix;
}

int main() {
    vector<int> arr = {2, 4, 6, 8, 10};
    int l = 1, r = 3;
    cout << "Range sum (recompute) from " << l << " to " << r << ": " << range_sum(arr, l, r) << endl;
    vector<int> prefix = build_prefix_sum(arr);
    cout << "Range sum (prefix sum) from " << l << " to " << r << ": " << prefix[r + 1] - prefix[l] << endl;
    return 0;
}
