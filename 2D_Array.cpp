#include <iostream>
using namespace std;

int main() {
    int arr[2][3]; // 2 rows and 3 columns

    cout << "Enter 6 numbers:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "2D Array:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
