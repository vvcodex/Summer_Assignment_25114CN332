// Write a program to reverse a number using recursion.

#include <iostream>
using namespace std;

int reverseNum(int n, int rev = 0) {
    if (n == 0)
        return rev;

    return reverseNum(n / 10, rev * 10 + n % 10);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed Number = " << reverseNum(num);

    return 0;
}