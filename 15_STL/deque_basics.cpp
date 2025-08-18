#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Creating a deque
    deque<int> numbers;
    
    // Adding elements at both ends
    numbers.push_front(1);  // Add to front
    numbers.push_back(2);   // Add to back
    numbers.push_front(0);  // Add to front
    numbers.push_back(3);   // Add to back
    
    cout << "Deque contents:" << endl;
    for(const int &num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // Access elements
    cout << "\nFirst element: " << numbers.front() << endl;
    cout << "Last element: " << numbers.back() << endl;
    cout << "Element at index 2: " << numbers[2] << endl;
    
    // Remove elements
    numbers.pop_front();  // Remove from front
    numbers.pop_back();   // Remove from back
    
    cout << "\nAfter removing front and back elements:" << endl;
    for(const int &num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // Insert in the middle
    auto it = numbers.begin() + 1;
    numbers.insert(it, 5);
    
    cout << "\nAfter inserting 5 at position 1:" << endl;
    for(const int &num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // Size operations
    cout << "\nSize: " << numbers.size() << endl;
    numbers.resize(5, 0);  // Resize to 5 elements, fill new positions with 0
    
    cout << "After resizing to 5:" << endl;
    for(const int &num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
