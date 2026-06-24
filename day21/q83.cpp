//wap to count vowels and consonants in a string
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str = "Hello, World!";
    int vowels = 0, consonants = 0;

    for (int i = 0; i < str.length(); i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        } else if (isalpha(c)) {
            consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    return 0;
}