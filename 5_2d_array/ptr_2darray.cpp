// Topic: Pointer to 2D array — basics
#include <iostream>
using namespace std;

int main() {
    int a[2][3] = {
        {10, 11, 12},
        {20, 21, 22}
    };

    int (*p)[3] = a; // pointer to array of 3 ints

    cout << p[0][0] << ' ' << p[0][1] << ' ' << p[0][2] << '\n';
    cout << p[1][0] << ' ' << p[1][1] << ' ' << p[1][2] << '\n';
    return 0;
}


