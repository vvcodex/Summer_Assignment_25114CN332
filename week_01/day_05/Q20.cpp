// Write a program to find the largest prime factor of a number.

#include <iostream>
using namespace std;

int main() {
    int num, largestPrimeFactor = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            largestPrimeFactor = i;
            num /= i;
        }
    }

    cout << "Largest Prime Factor = " << largestPrimeFactor;

    return 0;
}