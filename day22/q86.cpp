//wap to count words in a sentence
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World! This is a test sentence.";
    int wordCount = 0;
    bool inWord = false;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ' && !inWord) {
            wordCount++;
            inWord = true;
        } else if (str[i] == ' ') {
            inWord = false;
        }
    }

    cout << "Number of words: " << wordCount << endl;
    return 0;
}