//wap to check if a matrix is symmetric or not
#include <iostream>
using namespace std;

int main() {
    int arr[10][10], i, j, r, c;
    bool isSymmetric = true;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> r >> c;
    if (r != c) {
        cout << "Matrix is not square, hence not symmetric" << endl;
        return 1;
    }
    cout << "Enter the elements of the matrix: ";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (arr[i][j] != arr[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }
    if (isSymmetric) {
        cout << "The matrix is symmetric" << endl;
    } else {
        cout << "The matrix is not symmetric" << endl;
    }
    return 0;
}