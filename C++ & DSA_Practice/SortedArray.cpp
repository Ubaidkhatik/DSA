
#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    if (isSorted(arr, 5)) {
        cout << "Array is sorted";
    } else {
        cout << "Array is not sorted";
    }

    return 0;
}

