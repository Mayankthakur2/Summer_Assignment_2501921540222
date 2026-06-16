//wap to find the factorial of a given number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "The factorial of " << n << " is: " << factorial << endl;
    return 0;
}