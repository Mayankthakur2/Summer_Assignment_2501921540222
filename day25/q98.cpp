//wap to find common characters in two strings
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "hello";
    string str2 = "world";
    string common = "";

    for (char c : str1) {
        if (str2.find(c) != string::npos && common.find(c) == string::npos) {
            common += c;
        }
    }

    cout << "Common characters: " << common << endl;
    return 0;
}