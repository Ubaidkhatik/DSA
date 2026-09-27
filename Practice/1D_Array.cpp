
 #include <iostream>
using namespace std;

int main () {
    int arr [5]; // declare 1D array of size 5

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
        cin >> arr[i]; // input values

    cout << "You entered: ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " "; // display values
}
