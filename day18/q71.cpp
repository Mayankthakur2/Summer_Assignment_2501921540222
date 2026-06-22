//wap to binary search in a sorted array
#include <iostream>
using namespace std;

int main() {
    int arr[10], n, i, key, low, high, mid;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to be searched: ";
    cin >> key;
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            cout << "Element found at position: " << mid + 1 << endl;
            return 0;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << "Element not found" << endl;
    return 0;
}