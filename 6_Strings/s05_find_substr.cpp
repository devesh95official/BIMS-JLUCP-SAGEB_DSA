#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "=== find / substr ===\n";
    string s = "bananaban";
    size_t p = s.find("ana");
    if (p != string::npos) cout << "found at: " << p << ", piece: " << s.substr(p, 3) << "\n";
    else cout << "not found\n";
    return 0;
}


