//wap to find diagonal sum of a matrix
#include <iostream>
using namespace std;

int main() {
    int arr[10][10], i, j, r, c, sum = 0;
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
            if (i == j) {
                sum += arr[i][j];
            }
        }
    }
    cout << "Diagonal sum of the matrix: " << sum << endl;
    return 0;
}