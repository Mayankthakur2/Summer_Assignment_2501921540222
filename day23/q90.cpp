//wap to find first repeating character in a string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello";
    int frequency[256] = {0};

    // Count frequency of each character
    for (char c : str) {
        frequency[c]++;
    }

    // Find first repeating character
    for (char c : str) {
        if (frequency[c] > 1) {
            cout << "First repeating character: " << c << endl;
            return 0;
        }
    }

    cout << "No repeating character found." << endl;
    return 0;
}