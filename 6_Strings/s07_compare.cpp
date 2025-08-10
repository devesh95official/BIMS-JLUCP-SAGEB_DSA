#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "=== compare ===\n";
    string a,b; cin>>a>>b;
    cout << (a<b?"a<b":(a==b?"a==b":"a>b")) << "\n";
    cout << "compare: " << a.compare(b) << "\n";
    return 0;
}


