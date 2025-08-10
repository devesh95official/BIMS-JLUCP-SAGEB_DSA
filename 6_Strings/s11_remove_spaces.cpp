#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "=== remove spaces ===\n";
    string s; getline(cin, s);
    string t; for(char c:s) if(c!=' ') t+=c;
    cout << t << "\n";
    return 0;
}


