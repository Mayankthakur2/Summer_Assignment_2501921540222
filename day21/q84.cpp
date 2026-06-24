//wap to convert lowercase to uppercase and vice versa
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str = "Hello, World!";
    
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    cout << "Converted string: " << str << endl;
    return 0;
}