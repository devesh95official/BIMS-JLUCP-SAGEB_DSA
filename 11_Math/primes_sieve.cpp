// Sieve of Eratosthenes 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; if (!(cin >> N)) return 0;
    if (N < 2) { cout << "\n"; return 0; }
    vector<int> isPrime(N + 1, 1);
    isPrime[0] = 0; isPrime[1] = 0;
    for (int p = 2; p * p <= N; p++) if (isPrime[p]) {
        for (int m = p * p; m <= N; m += p) isPrime[m] = 0;
    }
    vector<int> primes;
    for (int i = 2; i <= N; i++) if (isPrime[i]) primes.push_back(i);
    for (int i = 0; i < (int)primes.size(); i++) {
        if (i) cout << ' ';
        cout << primes[i];
    }
    cout << "\n";
    return 0;
}


