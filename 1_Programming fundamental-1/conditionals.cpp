#include <iostream>

using namespace std;


int main() {

    // conditionals (if/else)

    int age;
    cin >> age;
    
    int apni_age = 8;
    
    if (age == apni_age) {
        cout << "AREY SIR AAP\n";
    }
    else if (age >= 18) {
        cout << "BANADO\n";
    }
    else {
        cout << "MAT BANAO\n";
    }

    return 0;
}