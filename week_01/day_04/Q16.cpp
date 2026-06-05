// Write a program to print Armstrong numbers in a given range.

#include <iostream>
using namespace std;

int main() {
    int start, end, num, temp, remainder, sum;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Armstrong numbers are: ";

    for (num = start; num <= end; num++) {
        temp = num;
        sum = 0;

        while (temp != 0) {
            remainder = temp % 10;
            sum += remainder * remainder * remainder;
            temp /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}