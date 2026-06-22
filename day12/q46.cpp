//wap to write a function for armstrong number check.
#include<iostream>
using namespace std;

bool isArmstrong(int n) {
    int original = n;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    return sum == original;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
    return 0;
}
