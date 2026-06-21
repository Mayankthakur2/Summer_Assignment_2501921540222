//wap to convert decimal number to binary
#include <iostream>
using namespace std;

int main() {
    int decimal, binary = 0, base = 1, remainder;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * base;
        decimal /= 2;
        base *= 10;
    }
    cout << "Binary number: " << binary << endl;
    return 0;
}