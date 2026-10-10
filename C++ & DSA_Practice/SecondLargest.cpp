
#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int size) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        return -1; 
    }

    return secondLargest;
}

int main() {
    int arr[] = {10, 25, 8, 40, 15, 30};

    cout << "Second largest: "
         << findSecondLargest(arr, 6);

    return 0;
}
