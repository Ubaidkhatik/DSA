

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

int main() {
    // Creating linked list nodes
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    // Printing linked list
    Node* temp = head;
    cout << "Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}