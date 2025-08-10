#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "=== vowels count ===\n";
    string s; getline(cin, s);
    int c=0; for(char ch:s){ char x=tolower((unsigned char)ch); if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u') c++; }
    cout << c << "\n";
    return 0;
}


