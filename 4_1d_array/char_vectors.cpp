#include <bits/stdc++.h>

using namespace std;


int main() {

    vector<char> v1(2, '*');
    vector<char>v2 = {'1', '1', '1', '1', '1', '1'};
    v1 = v2;

    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << ' ';
    }
    return 0;
}