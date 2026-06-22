//wap to write a function to find sum of two numbers.
#include<iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Sum: " << sum(x, y) << endl;
    return 0;
}