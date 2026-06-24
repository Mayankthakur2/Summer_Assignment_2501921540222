//wap to sort names alphabetically
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string names[] = {"Alice", "Bob", "Charlie", "David"};
    int size = sizeof(names) / sizeof(names[0]);

    sort(names, names + size);

    cout << "Names sorted alphabetically: ";
    for (int i = 0; i < size; i++) {
        cout << names[i] << " ";
    }
    cout << endl;

    return 0;
}