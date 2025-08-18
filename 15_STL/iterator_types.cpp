#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
using namespace std;

int main() {
    // Vector with random access iterator
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Vector with random access iterator:" << endl;
    
    // Forward iteration
    for(vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // Backward iteration
    for(vector<int>::reverse_iterator it = vec.rbegin(); it != vec.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // List with bidirectional iterator
    list<int> lst = {1, 2, 3, 4, 5};
    cout << "\nList with bidirectional iterator:" << endl;
    
    list<int>::iterator lit = lst.begin();
    cout << "Forward: ";
    while(lit != lst.end()) {
        cout << *lit << " ";
        ++lit;
    }
    cout << endl;
    
    list<int>::reverse_iterator rlit = lst.rbegin();
    cout << "Backward: ";
    while(rlit != lst.rend()) {
        cout << *rlit << " ";
        ++rlit;
    }
    cout << endl;
    
    // Forward list with forward iterator
    forward_list<int> flist = {1, 2, 3, 4, 5};
    cout << "\nForward list with forward iterator:" << endl;
    
    // Can only iterate forward
    forward_list<int>::iterator fit = flist.begin();
    while(fit != flist.end()) {
        cout << *fit << " ";
        ++fit;
    }
    cout << endl;
    
    return 0;
}
