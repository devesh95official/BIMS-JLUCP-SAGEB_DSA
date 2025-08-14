#include <bits/stdc++.h>

using namespace std;

// different examples of functions

void ankita(int a, int b, int c) {
    cout << "Yes sirr!!\n";

    if (a >= b)cout << a << endl;
    else cout << b << endl;
}

int suman() {
    cout << "What do you want!!?\n";
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.')cnt++;
    }
    return s.size() - cnt;
}

void nidhi(int n, int arr[]) { // funtion declaration & defined
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
    cout << "SIR, Done\n";
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    nidhi(n, arr);// called nidhi function

    cout << suman() << endl; // suman named complex function

    ankita(45, 45, 46);

    return 0;
}