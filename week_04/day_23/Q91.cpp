// Write a program to check whether two strings are anagrams.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length()) {
        cout << "Strings are not Anagrams.";
        return 0;
    }

    for (int i = 0; i < str1.length(); i++) {
        for (int j = i + 1; j < str1.length(); j++) {
            if (str1[i] > str1[j]) {
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }

            if (str2[i] > str2[j]) {
                char temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    if (str1 == str2)
        cout << "Strings are Anagrams.";
    else
        cout << "Strings are not Anagrams.";

    return 0;
}