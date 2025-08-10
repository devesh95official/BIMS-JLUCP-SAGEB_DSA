#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "=== palindrome ===\n";
    string s; getline(cin, s);
    string t; for(char c:s){ if(!isspace((unsigned char)c)) t+=tolower((unsigned char)c); }
    string r=t; reverse(r.begin(), r.end());
    cout << (t==r?"yes":"no") << "\n";
    return 0;
}


