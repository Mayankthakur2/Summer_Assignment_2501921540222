//wap to find row wise sum of a matrix
#include <iostream>
using namespace std;

int main() {
    int arr[10][10], i, j, r, c;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> r >> c;
    cout << "Enter the elements of the matrix: ";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    cout << "Row wise sums: " << endl;
    for (i = 0; i < r; i++) {
        int sum = 0;
        for (j = 0; j < c; j++) {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << sum << endl;
    }
    return 0;
}