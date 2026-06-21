//wap to convert binary number to decimal
#include <iostream>
using namespace std;

int main() {
    long long binary, decimal = 0, base = 1, remainder;
    cout << "Enter a binary number: ";
    cin >> binary;
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    cout << "Decimal number: " << decimal << endl;
    return 0;
}