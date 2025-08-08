#include <bits/stdc++.h>

using namespace std;



int main() {
    int a, b, c;
    cin >> a >> b >> c;
    map<int, int>mp;
    mp[a]++;
    mp[b]++;
    mp[c]++;
    for (auto x : mp)cout << x.first << " " << x.second << endl;
    return 0;
}