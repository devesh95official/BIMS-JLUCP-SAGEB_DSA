#include <bits/stdc++.h>

using namespace std;

// our funtion will take 3 nums and it will return maximum of those.
int maximum_of_3_nums(int&a1, int&b1, int&c1) {// call by reference
    a1 = 10;
    b1 = 24533;
    c1 = 24342;
    if (a1 >= b1 && a1 >= c1)return a1;
    if (b1 >= c1 && b1 >= a1)return b1;
    return c1;
}

void jlucp(int rahul) { // toogle cbv & cbr
    rahul = 123456789;
}

int main() {

    int a, b, c;
    cin >> a >> b >> c;
    // calling the function
    int maxi = maximum_of_3_nums(a, b, c);
    jlucp(a);
    jlucp(b);
    jlucp(c);
    cout << a << " " << b << " " << c << endl;
    return 0;
}