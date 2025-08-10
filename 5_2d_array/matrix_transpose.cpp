// Topic: Matrix transpose
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    vector<vector<int>> t(m, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            t[j][i] = a[i][j];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) cout << t[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}


