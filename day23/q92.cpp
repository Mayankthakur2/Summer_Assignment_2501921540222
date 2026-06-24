//wap to find maximum occurring character in a string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello";
    int frequency[256] = {0};
    char maxChar;
    int maxCount = 0;

    // Count frequency of each character
    for (char c : str) {
        frequency[c]++;
    }

    // Find maximum occurring character
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > maxCount) {
            maxCount = frequency[i];
            maxChar = static_cast<char>(i);
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    return 0;
}