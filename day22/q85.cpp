//wap to check if a string is palindrome or not
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str = "racecar";
    string cleaned = "";

    // Remove non-alphanumeric characters and convert to lowercase
    for (int i = 0; i < str.length(); i++) {
        if (isalnum(str[i])) {
            cleaned += tolower(str[i]);
        }
    }

    // Check if the cleaned string is a palindrome
    bool isPalindrome = true;
    int len = cleaned.length();
    for (int i = 0; i < len / 2; i++) {
        if (cleaned[i] != cleaned[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}