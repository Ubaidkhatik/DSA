#include <iostream>
using namespace std;

int getMax(int a[], int n) {
    int m = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > m) m = a[i];
    return m;
}

void countSort(int a[], int n, int exp) {
    int output[n], count[10] = {0};

    for (int i = 0; i < n; i++)
        count[(a[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--) {
        output[count[(a[i] / exp) % 10] - 1] = a[i];
        count[(a[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
        a[i] = output[i];
}

int main() {
    int a[6] = {170, 45, 75, 90, 802, 24}, n = 6;

    for (int exp = 1; getMax(a, n) / exp > 0; exp *= 10)
        countSort(a, n, exp);

    cout << "Sorted: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
