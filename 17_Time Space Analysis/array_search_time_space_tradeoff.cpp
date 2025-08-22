#include <iostream>
#include <vector>
using namespace std;

// Linear search (low space, high time)
bool linear_search(const vector<int>& arr, int target) {
    for (int x : arr) {
        if (x == target) return true;
    }
    return false;
}

// Lookup table (higher space, lower time)
vector<bool> build_lookup(const vector<int>& arr, int max_val) {
    vector<bool> lookup(max_val + 1, false);
    for (int x : arr) {
        if (x >= 0 && x <= max_val) lookup[x] = true;
    }
    return lookup;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15};
    int target = 11;
    int max_val = 20;
    cout << "Linear search for " << target << ": " << (linear_search(arr, target) ? "Found" : "Not found") << endl;
    vector<bool> lookup = build_lookup(arr, max_val);
    cout << "Lookup table search for " << target << ": " << (lookup[target] ? "Found" : "Not found") << endl;
    return 0;
}
