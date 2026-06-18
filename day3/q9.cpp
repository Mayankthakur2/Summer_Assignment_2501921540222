//wap to check whether a number is prime or not
#include <iostream>
using namespace std;

int main() {
    int n, isPrime = 1;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
        cout << "The number is prime." << endl;
    else
        cout << "The number is not prime." << endl;
    return 0;

}