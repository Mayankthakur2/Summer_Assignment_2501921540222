//wap to rotate array right.
#include<iostream>
using namespace std;

int main() {
    int arr[10], n, d;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number of positions to rotate right: ";
    cin >> d;
    d = d % n; // Handle cases where d is greater than n
    cout << "Array after right rotation: ";
    for (int i = n - d; i < n; i++) {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n - d; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}