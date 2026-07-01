// Write a program to create a menu-driven string operations system.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter a string: ";
    cin >> str;

    do {
        cout << "\n===== String Operations Menu =====\n";
        cout << "1. Display String\n";
        cout << "2. Find Length\n";
        cout << "3. Reverse String\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "String = " << str << endl;
                break;

            case 2:
                cout << "Length = " << str.length() << endl;
                break;

            case 3:
                cout << "Reversed String = ";
                for (int i = str.length() - 1; i >= 0; i--)
                    cout << str[i];
                cout << endl;
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