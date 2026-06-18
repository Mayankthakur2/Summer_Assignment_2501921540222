//wap to check strong number
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num, originalNum, remainder, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += factorial(remainder);
        originalNum /= 10;
    }

    if (sum == num)
        cout << num << " is a strong number." << endl;
    else
        cout << num << " is not a strong number." << endl;

    return 0;
}