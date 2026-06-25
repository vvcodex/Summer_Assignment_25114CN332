// Write a program to find the frequency of a character in a string.

#include <iostream>
using namespace std;

int main() {
    char str[100], ch;
    int count = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter a character: ";
    cin >> ch;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    cout << "Frequency of '" << ch << "' = " << count;

    return 0;
}