//wap to count set bits in a binary number
#include <iostream>
using namespace std;

int main() {
    long long binary, count = 0;
    cout << "Enter a binary number: ";
    cin >> binary;
    while (binary > 0) {
        if (binary % 10 == 1) {
            count++;
        }
        binary /= 10;
    }
    cout << "Number of set bits: " << count << endl;
    return 0;
}