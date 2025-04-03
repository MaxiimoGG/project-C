#include <iostream>
using namespace std;

int main() {
    int arr[5]; // 1D array with 5 elements
    cout << "Enter 5 numbers:\n";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];  // Taking input
    }

    cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";  // Printing output
    }

    return 0;
}
