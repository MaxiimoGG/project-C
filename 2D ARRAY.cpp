#include <iostream>
using namespace std;

int main() {
    int arr[2][3]; // 2D array (2 rows, 3 columns)
    cout << "Enter 6 numbers for the 2x3 matrix:\n";

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
