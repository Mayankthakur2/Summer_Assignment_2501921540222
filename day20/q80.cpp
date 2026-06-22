//wap to find coloumn wise sum of a matrix
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
    cout << "Column wise sums: " << endl;
    for (j = 0; j < c; j++) {
        int sum = 0;
        for (i = 0; i < r; i++) {
            sum += arr[i][j];
        }
        cout << "Sum of column " << j + 1 << ": " << sum << endl;
    }
    return 0;
}