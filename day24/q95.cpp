//wap to find longest word in a string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "The quick brown fox jumps over the lazy dog";
    string longestWord = "";
    string currentWord = "";

    for (char c : str) {
        if (c == ' ') {
            if (currentWord.length() > longestWord.length()) {
                longestWord = currentWord;
            }
            currentWord = "";
        } else {
            currentWord += c;
        }
    }

    // Check the last word
    if (currentWord.length() > longestWord.length()) {
        longestWord = currentWord;
    }

    cout << "Longest word: " << longestWord << endl;
    return 0;
}