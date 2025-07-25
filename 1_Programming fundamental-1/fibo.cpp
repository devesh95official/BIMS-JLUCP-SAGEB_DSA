#include <iostream>

using namespace std;


int main() {

    int N;
    cin >> N;

    int a = 0, b = 1;
    bool is_fibo = false;

    if (N == 0)is_fibo = true;

    while (b <= N) {

        if (b == N) {
            is_fibo = true;
        }

        int temp = a + b;
        a = b;
        b = temp;
    }
    
    if (is_fibo == true) cout << "YES , IT IS FIBO NUM";
    else cout << "NO , NOT A FIBO NUM";

    return 0;
}