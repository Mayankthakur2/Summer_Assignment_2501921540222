//wap to find common elements in three sorted arrays
#include <iostream>
using namespace std;

int main() {
    int arr1[10], arr2[10], arr3[10], common[20], n1, n2, n3, i, j, k, l;
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
    cout << "Enter the number of elements in third array: ";
    cin >> n3;
    cout << "Enter the elements of third array: ";
    for (i = 0; i < n3; i++) {
        cin >> arr3[i];
    }
    i = 0, j = 0, k = 0, l = 0;
    while (i < n1 && j < n2 && k < n3) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            common[l++] = arr1[i++];
            j++;
            k++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr3[k]) {
            j++;
        } else {
            k++;
        }
    }
    cout << "Common elements in all three sorted arrays: ";
    for (i = 0; i < l; i++) {
        cout << common[i] << " ";
    }
    cout << endl;
    return 0;
}