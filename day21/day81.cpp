//wap to find string length without using strlen function
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    int length = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    
    cout << "Length of the string: " << length << endl;
    return 0;
}