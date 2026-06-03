// Write a program to Check whether a number is palindrome.

#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num != 0) {
        reverse = reverse * 10 + (num % 10);
        num /= 10;
    }

    if (originalNum == reverse)
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";

    return 0;
}