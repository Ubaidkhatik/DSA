#include <iostream>
using namespace std;

int main() {
    int a[6] = {12, 11, 13, 5, 6, 7};
    int n = 6;

    // Heap Sort
    for (int i = n / 2 - 1; i >= 0; i--)    // Build heap
        for (int j = i; j * 2 + 1 < n; ) {
            int k = 2 * j + 1;
            if (k + 1 < n && a[k + 1] > a[k]) k++;
            if (a[j] < a[k]) swap(a[j], a[k]);
            j = k;
        }

    for (int i = n - 1; i > 0; i--) {       // Sort
        swap(a[0], a[i]);
        for (int j = 0; j * 2 + 1 < i; ) {
            int k = 2 * j + 1;
            if (k + 1 < i && a[k + 1] > a[k]) k++;
            if (a[j] < a[k]) swap(a[j], a[k]);
            j = k;
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
