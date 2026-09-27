

#include <iostream>
#define SIZE 5  // maximum size of the circular queue
using namespace std;

class CircularQueue {
    int items[SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    // Check if the queue is full
    bool isFull() {
        return ((front == 0 && rear == SIZE - 1) || (front == rear + 1));
    }

    // Check if the queue is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Add an element
    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue is full! Cannot insert " << element << endl;
            return;
        }

        // If first element
        if (front == -1)
            front = 0;

        // Move rear circularly
        rear = (rear + 1) % SIZE;
        items[rear] = element;
        cout << "Inserted " << element << endl;
    }

    // Remove an element
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty! Cannot delete." << endl;
            return;
        }

        cout << "Deleted " << items[front] << endl;

        // If the queue becomes empty
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }

    // Display the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << items[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.dequeue();
    q.dequeue();
    q.display();

    q.enqueue(60);
    q.enqueue(70);
    q.display();

    return 0;
}