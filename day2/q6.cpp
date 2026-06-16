//wap to find reverse of a given number
#include <iostream>
using namespace std;

int main() {
    int n, reverse = 0, digit;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    cout << "Reverse of the number: " << reverse << endl;
    return 0;
}