#include <iostream>

using namespace std;


int main() {

    int N;
    cin >> N;

    int sum = 0;

    for (int i = 1; i <= N; i++) {
        int num;
        cin >> num; // ith number

        sum += num;// adding num to sum
    }

    int avg = sum / N; // calc average

    cout << avg << endl;

    return 0;
}