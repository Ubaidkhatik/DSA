

#include <iostream>
using namespace std;

#define SIZE 5  // Define maximum size of stack

class Stack {
    int top;
    int arr[SIZE];

public:
    Stack() { top = -1; }

    void push(int value) {
        if (top == SIZE - 1) {
            cout << "Stack Overflow!" << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed into stack." << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;
        }
    }

    void peek() {
        if (top == -1)
            cout << "Stack is Empty!" << endl;
        else
            cout << "Top element: " << arr[top] << endl;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is Empty!" << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.peek();
    s.pop();
    s.display();
    return 0;
}