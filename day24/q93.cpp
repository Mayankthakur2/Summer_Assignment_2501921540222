//wap to check string rotation or not
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "abcde";
    string str2 = "cdeab";

    // Check if lengths are equal
    if (str1.length() != str2.length()) {
        cout << "Strings are not rotations of each other." << endl;
        return 0;
    }

    // Concatenate str1 with itself
    string concatenated = str1 + str1;

    // Check if str2 is a substring of concatenated
    if (concatenated.find(str2) != string::npos) {
        cout << "Strings are rotations of each other." << endl;
    } else {
        cout << "Strings are not rotations of each other." << endl;
    }

    return 0;
}