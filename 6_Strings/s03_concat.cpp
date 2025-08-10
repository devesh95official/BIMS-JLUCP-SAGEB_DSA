#include <bits/stdc++.h>
using namespace std;

int main() {
    string a = "Hello", b = "World";
    cout << "=== Concat ===\n";
    cout << "+ : " << (a + ", " + b + "!") << "\n";
    string t = a; t.append(", ").append(b).push_back('!');
    cout << "append+push_back : " << t << "\n";
    ostringstream oss; oss << a << ", " << b << "! " << 2025;
    cout << "ostringstream : " << oss.str() << "\n";
    return 0;
}


