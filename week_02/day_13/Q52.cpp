// Write a program to count even and odd elements in an array.

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    int evenCount = 0, oddCount = 0;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Even Elements = " << evenCount << endl;
    cout << "Odd Elements = " << oddCount;

    return 0;
}