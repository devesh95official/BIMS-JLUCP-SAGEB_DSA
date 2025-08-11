// Brute-force primes up to N 
#include <bits/stdc++.h>
using namespace std;

int isPrime(int n) {
    if (n < 2) return 0;
    for (int d = 2; d < n; d++) if (n % d == 0) return 0;
    return 1;
}

int main() {
    int N; if (!(cin >> N)) return 0;
    vector<int> primes;
    for (int x = 2; x <= N; x++) if (isPrime(x)) primes.push_back(x);
    for (int i = 0; i < (int)primes.size(); i++) {
        if (i) cout << ' ';
        cout << primes[i];
    }
    cout << "\n";
    return 0;
}


