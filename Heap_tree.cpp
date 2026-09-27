#include <iostream>
using namespace std;

class MinHeap {
public:
    int arr[100];
    int size;

    MinHeap() {
        size = 0;
    }

    // Insert a new element
    void insert(int value) {
        size++;
        int index = size;
        arr[index] = value;

        // Heapify Up
        while (index > 1) {
            int parent = index / 2;
            if (arr[parent] > arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                break;
            }
        }
    }

    // Delete root element (minimum)
    int deleteRoot() {
        if (size == 0) {
            return -1;
        }

        int rootValue = arr[1];
        arr[1] = arr[size];
        size--;

        // Heapify Down
        int index = 1;
        while (index <= size) {
            int left = 2 * index;
            int right = 2 * index + 1;
            int smallest = index;

            if (left <= size && arr[left] < arr[smallest])
                smallest = left;
            if (right <= size && arr[right] < arr[smallest])
                smallest = right;

            if (smallest != index) {
                swap(arr[index], arr[smallest]);
                index = smallest;
            } else {
                break;
            }
        }

        return rootValue;
    }

    // Display Heap
    void display() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MinHeap heap;

    heap.insert(40);
    heap.insert(20);
    heap.insert(30);
    heap.insert(10);
    heap.insert(50);

    cout << "Min-Heap elements: ";
    heap.display();

    cout << "Deleted root (min): " << heap.deleteRoot() << endl;

    cout << "Heap after deletion: ";
    heap.display();

    return 0;
}
