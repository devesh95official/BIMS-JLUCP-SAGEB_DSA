#include <iostream>
#include <list>
using namespace std;

int main() {
    // Creating a list
    list<int> numbers;
    
    // Adding elements
    numbers.push_back(30);
    numbers.push_front(10);
    numbers.push_back(40);
    numbers.push_front(5);
    
    cout << "List contents:" << endl;
    for(const int &num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // List operations
    numbers.sort();  // Sorting the list
    cout << "\nSorted list:" << endl;
    for(const int &num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // Remove elements
    numbers.remove(30);  // Removes all occurrences of 30
    
    // Reverse the list
    numbers.reverse();
    
    cout << "\nReversed list after removing 30:" << endl;
    for(const int &num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
