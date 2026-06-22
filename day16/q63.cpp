//wap to find pair with given sum in array
#include<iostream>
using namespace std;

int main() {
    int arr[10], n, sum;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target sum: ";
    cin >> sum;
    cout << "Pairs with given sum: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }
    return 0;
}