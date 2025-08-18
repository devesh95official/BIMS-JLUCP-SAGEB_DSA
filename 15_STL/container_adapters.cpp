#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

int main() {
    // Stack example
    stack<string> books;
    
    // Adding elements (LIFO - Last In First Out)
    books.push("Book 1");
    books.push("Book 2");
    books.push("Book 3");
    
    cout << "Stack operations:" << endl;
    cout << "Top book: " << books.top() << endl;
    cout << "Stack size: " << books.size() << endl;
    
    cout << "\nRemoving books:" << endl;
    while(!books.empty()) {
        cout << "Removing: " << books.top() << endl;
        books.pop();
    }
    
    // Queue example
    queue<string> customers;
    
    // Adding elements (FIFO - First In First Out)
    customers.push("Customer 1");
    customers.push("Customer 2");
    customers.push("Customer 3");
    
    cout << "\nQueue operations:" << endl;
    cout << "First customer: " << customers.front() << endl;
    cout << "Last customer: " << customers.back() << endl;
    cout << "Queue size: " << customers.size() << endl;
    
    cout << "\nServing customers:" << endl;
    while(!customers.empty()) {
        cout << "Serving: " << customers.front() << endl;
        customers.pop();
    }
    
    // Priority Queue example
    priority_queue<int> numbers;
    
    // Adding elements (automatically sorted in descending order)
    numbers.push(3);
    numbers.push(1);
    numbers.push(4);
    numbers.push(2);
    
    cout << "\nPriority Queue operations:" << endl;
    cout << "Top element: " << numbers.top() << endl;
    
    cout << "\nRemoving elements (in priority order):" << endl;
    while(!numbers.empty()) {
        cout << numbers.top() << " ";
        numbers.pop();
    }
    cout << endl;
    
    return 0;
}
