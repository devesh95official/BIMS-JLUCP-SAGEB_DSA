// Topic: 2D vector — simple ops
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> a(2, vector<int>(3, 0));
    a[0][1] = 5;
    a.push_back({7, 8, 9});

    for (const auto& row : a) {
        for (int x : row) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}


