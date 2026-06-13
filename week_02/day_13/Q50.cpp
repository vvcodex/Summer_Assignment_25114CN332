// Write a program to find sum and average of array elements.

#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    int sum = 0;
    float average;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    average = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average;

    return 0;
}
