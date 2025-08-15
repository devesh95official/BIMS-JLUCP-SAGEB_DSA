//https://www.codechef.com/problems/CAKEMAKE

#include <bits/stdc++.h>

using namespace std;

int main() {

    int a,b;
    cin >> a >> b;

    cout << a * b - min(a, b);

    return 0;
}
