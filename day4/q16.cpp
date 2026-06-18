//wap toprint armstrong numbers in a given range
#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num, remainder, result = 0;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, 3);
        originalNum /= 10;
    }
    return result == num;
}

int main() {
    int start, end;
    cout << "Enter the range (start and end): ";
    cin >> start >> end;
    cout << "Armstrong numbers in the range " << start << " to " << end << " are: ";
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i))
            cout << i << " ";
    }
    return 0;
}