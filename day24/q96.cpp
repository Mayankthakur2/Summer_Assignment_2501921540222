//wap to remove duplicate characters from a string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "hello";
    string result = "";

    for (char c : str) {
        if (result.find(c) == string::npos) {
            result += c;
        }
    }

    cout << "String after removing duplicates: " << result << endl;
    return 0;
}