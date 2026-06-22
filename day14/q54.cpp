//wap to frequency of each element in an array.
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
    int freq[10] = {0};
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    cout << "Frequency of each element:" << endl;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            cout << i << ": " << freq[i] << endl;
        }
    }
    return 0;
}
