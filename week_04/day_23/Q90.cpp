// Write a program to find the first repeating character.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    bool found = false;

    for (int i = 0; i < str.length(); i++) {
        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j]) {
                cout << "First Repeating Character = " << str[i];
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
        cout << "No Repeating Character Found.";

    return 0;
}