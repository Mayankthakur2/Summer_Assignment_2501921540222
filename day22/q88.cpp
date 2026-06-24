//wap to remove spaces from a string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    str.erase(0, str.find_first_not_of(' '));
    str.erase(str.find_last_not_of(' ') + 1);
    cout << "String after removing spaces: " << str << endl;
    return 0;
}