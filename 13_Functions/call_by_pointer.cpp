// functions to show call by pointer
#include <bits/stdc++.h>

using namespace std;

// our function will take 3 nums and it will return maximum of those.
int maximum_of_3_nums(int* a, int* b, int* c) {// call by pointer
    *a = 10;
    *b = 24533;
    *c = 24342;
    if (*a >= *b && *a >= *c)return *a;
    if (*b >= *c && *b >= *a)return *b;
    return *c;
}

int main() {

    int a, b, c;
    cin >> a >> b >> c;
    // calling the function
    int maxi = maximum_of_3_nums(&a, &b, &c);
    cout << a << ' ' << b << ' ' << c << endl;
    cout << maxi << endl;
    return 0;
}
