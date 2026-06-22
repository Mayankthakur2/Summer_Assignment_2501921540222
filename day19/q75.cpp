//wap to transpose of a matrix
#include <iostream>
using namespace std;

int main() {
    int arr[10][10], trans[10][10], i, j, r, c;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> r >> c;
    cout << "Enter the elements of the matrix: ";
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            trans[j][i] = arr[i][j];
        }
    }
    cout << "Transpose of the matrix: " << endl;
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}