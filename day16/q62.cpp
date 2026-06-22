//wap to find maximum frequency element in array
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
    int max_freq = 0, max_element = 0;
    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
            }
        }
        if (freq > max_freq) {
            max_freq = freq;
            max_element = arr[i];
        }
    }
    cout << "Maximum frequency element: " << max_element << endl;
    return 0;
}