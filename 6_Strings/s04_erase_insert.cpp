#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "=== insert / erase ===\n";
    string s = "programming";
    s.insert(0, "I love ");
    cout << s << "\n";
    s.erase(0, 7);
    cout << s << "\n";
    return 0;
}


