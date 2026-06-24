//wap to check anagram or not
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str1 = "listen";
    string str2 = "silent";

    // Convert strings to lowercase
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Sort the characters
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Check if the sorted strings are equal
    if (str1 == str2) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}