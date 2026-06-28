// Write a program to create a contact management system.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    string name, phone;

    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contact\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Contact Name: ";
                cin >> name;

                cout << "Enter Phone Number: ";
                cin >> phone;

                cout << "Contact Saved Successfully!\n";
                break;

            case 2:
                cout << "\n----- Contact Details -----\n";
                cout << "Name         : " << name << endl;
                cout << "Phone Number : " << phone << endl;
                break;

            case 3:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
}