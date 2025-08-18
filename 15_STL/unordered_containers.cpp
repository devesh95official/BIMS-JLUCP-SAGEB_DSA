#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    // Unordered map example
    unordered_map<string, int> scores;
    
    // Insert elements
    scores["Alice"] = 95;
    scores["Bob"] = 89;
    scores["Charlie"] = 92;
    
    cout << "Unordered Map Contents:" << endl;
    for(const auto &pair : scores) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    // Find element
    auto it = scores.find("Bob");
    if(it != scores.end()) {
        cout << "\nFound Bob's score: " << it->second << endl;
    }
    
    // Bucket information
    cout << "\nBucket count: " << scores.bucket_count() << endl;
    cout << "Load factor: " << scores.load_factor() << endl;
    
    // Unordered set example
    unordered_set<string> fruits;
    
    // Insert elements
    fruits.insert("apple");
    fruits.insert("banana");
    fruits.insert("orange");
    fruits.insert("apple");  // Duplicate, won't be inserted
    
    cout << "\nUnordered Set Contents:" << endl;
    for(const auto &fruit : fruits) {
        cout << fruit << endl;
    }
    
    // Check if element exists
    if(fruits.find("banana") != fruits.end()) {
        cout << "\nBanana is in the set" << endl;
    }
    
    // Remove element
    fruits.erase("orange");
    
    cout << "\nAfter removing orange:" << endl;
    for(const auto &fruit : fruits) {
        cout << fruit << endl;
    }
    
    // Performance characteristics
    cout << "\nSet bucket count: " << fruits.bucket_count() << endl;
    cout << "Set load factor: " << fruits.load_factor() << endl;
    
    return 0;
}
