// Write a program to create a menu-driven array operations system.

#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, i;
    int sum = 0, largest;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n===== Array Operations Menu =====\n";
        cout << "1. Display Array\n";
        cout << "2. Find Sum\n";
        cout << "3. Find Largest Element\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array Elements: ";
                for (i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
                break;

            case 2:
                sum = 0;
                for (i = 0; i < n; i++)
                    sum += arr[i];
                cout << "Sum = " << sum << endl;
                break;

            case 3:
                largest = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] > largest)
                        largest = arr[i];
                }
                cout << "Largest Element = " << largest << endl;
                break;

            case 4:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}