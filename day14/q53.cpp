//wap to linearly search an element in an array.
#include<iostream>
using namespace std;

int main() {
    int arr[10], n, search;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> search;
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            flag = 1;
            cout << "Element found at index: " << i << endl;
            break;
        }
    }
    if (flag == 0) {
        cout << "Element not found" << endl;
    }
    return 0;
}
