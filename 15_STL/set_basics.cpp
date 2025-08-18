#include <iostream>
#include <set>
using namespace std;

int main() {
    // Creating a set
    set<int> numbers;
    
    // Inserting elements (duplicates are automatically removed)
    numbers.insert(30);
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(10);  // This won't create a duplicate
    
    cout << "Set contents:" << endl;
    for(const int &num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // Finding elements
    auto it = numbers.find(20);
    if(it != numbers.end()) {
        cout << "\nFound: " << *it << endl;
    }
    
    // Checking if element exists
    if(numbers.count(25) == 0) {
        cout << "25 is not in the set" << endl;
    }
    
    // Size of set
    cout << "\nSet size: " << numbers.size() << endl;
    
    // Remove element
    numbers.erase(30);
    
    cout << "\nAfter removing 30:" << endl;
    for(const int &num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
