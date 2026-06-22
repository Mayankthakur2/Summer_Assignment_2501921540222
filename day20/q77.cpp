//wap to multiply two matrices
#include <iostream>
using namespace std;

int main() {
    int arr1[10][10], arr2[10][10], prod[10][10], i, j, k, r1, c1, r2, c2;
    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter the number of rows and columns of the second matrix: ";
    cin >> r2 >> c2;
    if (c1 != r2) {
        cout << "Incompatible matrix dimensions" << endl;
        return 1;
    }
    cout << "Enter the elements of the first matrix: ";
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the elements of the second matrix: ";
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            cin >> arr2[i][j];
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            prod[i][j] = 0;
            for (k = 0; k < c1; k++) {
                prod[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    cout << "Product of the two matrices: " << endl;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            cout << prod[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}