#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};
    
    // Sorting
    sort(numbers.begin(), numbers.end());
    cout << "Sorted numbers:" << endl;
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // Binary search (only works on sorted containers)
    int searchValue = 25;
    bool found = binary_search(numbers.begin(), numbers.end(), searchValue);
    cout << "\n" << searchValue << " is " << (found ? "found" : "not found") << endl;
    
    // Finding maximum and minimum elements
    auto minElement = min_element(numbers.begin(), numbers.end());
    auto maxElement = max_element(numbers.begin(), numbers.end());
    
    cout << "\nMinimum element: " << *minElement << endl;
    cout << "Maximum element: " << *maxElement << endl;
    
    // Counting occurrences
    numbers.push_back(25);  // Add another 25
    int count = std::count(numbers.begin(), numbers.end(), 25);
    cout << "\nNumber of 25s: " << count << endl;
    
    // Reversing the vector
    reverse(numbers.begin(), numbers.end());
    cout << "\nReversed numbers:" << endl;
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
