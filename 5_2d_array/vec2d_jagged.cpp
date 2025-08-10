// Topic: 2D vector (jagged) — simple print
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> v = {
        {1, 2, 3},
        {4, 5},
        {6}
    };

    for (size_t i = 0; i < v.size(); i++) {
        for (size_t j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}


