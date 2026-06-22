//wap to subtraction of two matrices
#include <iostream>
using namespace std;

int main() {
    int arr1[10][10], arr2[10][10], diff[10][10], i, j, r, c;
    cout << "Enter the number of rows and columns of the matrices: ";
    cin >> r >> c;
    cout << "Enter the elements of the first matrix: ";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the elements of the second matrix: ";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> arr2[i][j];
        }
    }
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            diff[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    cout << "Difference of the two matrices: " << endl;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}