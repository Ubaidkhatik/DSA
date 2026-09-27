#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]); // size of array

    // Insertion Sort
    for (int i = 1; i < n; i++) {
        int key = arr[i];   // current element
        int j = i - 1;

        // shift elements of arr[0..i-1] that are greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // shift right
            j--;
        }
        arr[j + 1] = key;  // place key at correct position
    }

    // Print sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
