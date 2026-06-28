// Write a program to create an employee management system.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int empId, choice;
    string empName;
    float salary;

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employee\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> empId;

                cout << "Enter Employee Name: ";
                cin >> empName;

                cout << "Enter Salary: ";
                cin >> salary;

                cout << "Employee Record Added Successfully!\n";
                break;

            case 2:
                cout << "\n----- Employee Record -----\n";
                cout << "Employee ID   : " << empId << endl;
                cout << "Employee Name : " << empName << endl;
                cout << "Salary        : " << salary << endl;
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