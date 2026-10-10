
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int i = 0;
    int j = size - 1;

    while (i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    reverseArray(arr, 5);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
