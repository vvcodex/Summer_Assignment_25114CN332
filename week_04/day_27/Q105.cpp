// Write a program to create a student record management system.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int roll;
    string name;
    float marks;
    int choice;

    do {
        cout << "\n===== Student Record Management System =====\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display Student Record\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Roll Number: ";
                cin >> roll;

                cout << "Enter Name: ";
                cin >> name;

                cout << "Enter Marks: ";
                cin >> marks;

                cout << "Student Record Added Successfully!\n";
                break;

            case 2:
                cout << "\n----- Student Record -----\n";
                cout << "Roll Number : " << roll << endl;
                cout << "Name        : " << name << endl;
                cout << "Marks       : " << marks << endl;
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