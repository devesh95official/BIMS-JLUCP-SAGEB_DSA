#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "=== String Basic ===\n";
    cout << "Enter a line: ";
    string s; getline(cin, s);
    cout << "Text       : " << s << "\n";
    cout << "Length     : " << s.size() << "\n";
    if (!s.empty()) {
        cout << "First char : " << s.front() << "\n";
        cout << "Last char  : " << s.back() << "\n";
    }
    return 0;
}


