//wap to find x^n without using pow function
#include <iostream>
using namespace std;

int main() {
    int x, n;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;

    long long result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }

    cout << x << "^" << n << " = " << result << endl;
    return 0;
}