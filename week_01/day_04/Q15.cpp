// Write a program to check whether a number is an Armstrong number.

#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }

    if (result == originalNum)
        cout << originalNum << " is an Armstrong Number.";
    else
        cout << originalNum << " is not an Armstrong Number.";

    return 0;
}