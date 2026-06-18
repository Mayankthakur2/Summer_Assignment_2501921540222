//wap to find largest prime factor of a given number
#include <iostream>
using namespace std;

int main() {
    int num, largestPrimeFactor = 1;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 2; i <= num; i++) {
        if (num % i == 0) {
            int isPrime = 1;
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) {
                largestPrimeFactor = i;
            }
        }
    }

    cout << "Largest prime factor of " << num << " is: " << largestPrimeFactor << endl;

    return 0;
}