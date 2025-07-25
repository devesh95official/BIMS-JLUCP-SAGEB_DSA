#include <bits/stdc++.h>

using namespace std;


int main() {

    int N;
    cin >> N;

    float sum = 0;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int i = 1;

    while (i <= N) {
        float num;
        cin >> num;

        sum += num;

        if (num < mini) {
            mini = num;
        }
        
        if (num > maxi) {
            maxi = num;
        }
        
        i++;
    }

    cout << sum / (float)N << endl;
    cout << mini << " " << maxi << endl;


    return 0;
}