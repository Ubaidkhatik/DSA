

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q; // create a queue of integers

    // Insert elements (enqueue)
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Queue elements after pushing 10, 20, 30:" << endl;
    queue<int> temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // Access front and back
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // Remove element (dequeue)
    q.pop();
    cout << "\nAfter one pop:" << endl;
    temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    return 0;
}