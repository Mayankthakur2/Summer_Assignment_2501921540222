//wap to union of two sorted arrays
#include <iostream>
using namespace std;

int main() {
    int arr1[10], arr2[10], union_arr[20], n1, n2, i, j, k;
    cout << "Enter the number of elements in first array: ";
    cin >> n1;
    cout << "Enter the elements of first array: ";
    for (i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the number of elements in second array: ";
    cin >> n2;
    cout << "Enter the elements of second array: ";
    for (i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            union_arr[k++] = arr1[i++];
        } else if (arr1[i] > arr2[j]) {
            union_arr[k++] = arr2[j++];
        } else {
            union_arr[k++] = arr1[i++];
            j++;
        }
    }
    while (i < n1) {
        union_arr[k++] = arr1[i++];
    }
    while (j < n2) {
        union_arr[k++] = arr2[j++];
    }
    cout << "Union of sorted arrays: ";
    for (i = 0; i < k; i++) {
        cout << union_arr[i] << " ";
    }
    cout << endl;
    return 0;
}