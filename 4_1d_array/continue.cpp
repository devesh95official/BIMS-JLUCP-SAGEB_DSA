// #include <bits/stdc++.h>

// using namespace std;


// int main() {

//     int n;
//     cin >> n;
//     cout << sqrt(n) << endl;
//     if (sqrt(n)*sqrt(n) == n)cout << "YES\n";
//     else cout << "NO\n";

//     return 0;
// }

#include <iostream>

using namespace std;


int main() {

    // if (12 == 15)cout << "YES\n";
    // else cout << "NO\n";
    //ternary

    // cout << ((12 == 12) ? "YES\n" : "NO\n");

    for (int i = 1; i <= 12; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << ' ';
    }

    return 0;
}