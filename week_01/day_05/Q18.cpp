// Write a program to check whether a number is a Strong Number.

#include <iostream>
using namespace std;

int main() {
    int num, originalNum, digit, sum = 0, fact;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num != 0) {
        digit = num % 10;
        fact = 1;

        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if (sum == originalNum)
        cout << originalNum << " is a Strong Number.";
    else
        cout << originalNum << " is not a Strong Number.";

    return 0;
}