#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Creating a map (key-value pairs)
    map<string, int> ages;
    
    // Inserting elements
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    ages.insert(make_pair("Charlie", 35));
    
    // Accessing elements
    cout << "Ages:" << endl;
    for(const auto &pair : ages) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    // Finding elements
    string searchName = "Bob";
    auto it = ages.find(searchName);
    if(it != ages.end()) {
        cout << "\nFound " << searchName << "'s age: " << it->second << endl;
    }
    
    // Checking if key exists
    if(ages.count("David") == 0) {
        cout << "\nDavid is not in the map" << endl;
    }
    
    // Size of map
    cout << "\nNumber of entries: " << ages.size() << endl;
    
    // Removing an entry
    ages.erase("Alice");
    
    cout << "\nAfter removing Alice:" << endl;
    for(const auto &pair : ages) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    return 0;
}
