//wap to find first non repeating character in a string
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

    // Find first non-repeating character
    for (char c : str) {
        if (frequency[c] == 1) {
            cout << "First non-repeating character: " << c << endl;
            return 0;
        }
    }

    cout << "No non-repeating character found." << endl;
    return 0;
}