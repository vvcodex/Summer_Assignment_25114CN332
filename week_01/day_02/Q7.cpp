// Write a program to Find product of digits.

#include <iostream>
using namespace std;

int main() {
    int num;
    long long product = 1;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        product *= (num % 10);
        num /= 10;
    }

    cout << "Product of digits = " << product;

    return 0;
}