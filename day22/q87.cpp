//wap to character frequency in a string
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string str = "Hello, World!";
    map<char, int> frequency;

    for (char c : str) {
        frequency[c]++;
    }

    cout << "Character frequencies:" << endl;
    for (const auto& pair : frequency) {
        cout << "'" << pair.first << "': " << pair.second << endl;
    }

    return 0;
}