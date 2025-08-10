#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "=== Char Array vs string ===\n";
    char a[100]; strcpy(a, "Hello");
    char b[100]; strcpy(b, "World");
    strcat(a, ", "); strcat(a, b);
    cout << "char[] : " << a << "\n";

    string s1 = "Hello", s2 = "World";
    s1 += ", "; s1 += s2;
    cout << "string : " << s1 << "\n";
    return 0;
}


