#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Creating a vector
    vector<int> numbers;
    
    // Adding elements using push_back
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    
    // Accessing elements using iterator
    cout << "Using iterator:" << endl;
    for(vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // Accessing elements using range-based for loop
    cout << "Using range-based for loop:" << endl;
    for(const int &num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // Vector size and capacity
    cout << "\nVector size: " << numbers.size() << endl;
    cout << "Vector capacity: " << numbers.capacity() << endl;
    
    // Accessing elements using index
    cout << "\nFirst element: " << numbers[0] << endl;
    cout << "Second element: " << numbers.at(1) << endl;
    
    // Adding element at front
    numbers.insert(numbers.begin(), 5);
    
    // Final vector contents
    cout << "\nFinal vector contents:" << endl;
    for(const int &num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
