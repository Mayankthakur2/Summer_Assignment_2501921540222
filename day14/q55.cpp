//wap to second largest element in an array.
#include<iostream>
using namespace std;

int main() {
    int arr[10], n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int largest = arr[0], second_largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    cout << "Second largest element: " << second_largest << endl;
    return 0;
}
