//wap to print prime numbers in a given range
#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter the range (start and end): ";
    cin >> start >> end;
    cout << "Prime numbers in the range " << start << " to " << end << " are: ";
    for (int n = start; n <= end; n++) {
        if (n <= 1) continue;
        bool isPrime = true;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << n << " ";
        }
    }
    cout << endl;
    return 0;
}