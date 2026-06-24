//wap to sort words by length
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compareByLength(const string &a, const string &b) {
    return a.length() < b.length();
}

int main() {
    string words[] = {"apple", "pie", "banana", "cat"};
    int size = sizeof(words) / sizeof(words[0]);

    sort(words, words + size, compareByLength);

    cout << "Words sorted by length: ";
    for (int i = 0; i < size; i++) {
        cout << words[i] << " ";
    }
    cout << endl;

    return 0;
}