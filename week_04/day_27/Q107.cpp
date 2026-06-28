// Write a program to create a salary management system.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int empId, choice;
    string empName;
    float basicSalary, bonus, totalSalary;

    do {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Enter Employee Details\n";
        cout << "2. Display Salary Details\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> empId;

                cout << "Enter Employee Name: ";
                cin >> empName;

                cout << "Enter Basic Salary: ";
                cin >> basicSalary;

                cout << "Enter Bonus: ";
                cin >> bonus;

                totalSalary = basicSalary + bonus;

                cout << "Employee Details Saved Successfully!\n";
                break;

            case 2:
                cout << "\n----- Salary Details -----\n";
                cout << "Employee ID   : " << empId << endl;
                cout << "Employee Name : " << empName << endl;
                cout << "Basic Salary  : Rs. " << basicSalary << endl;
                cout << "Bonus         : Rs. " << bonus << endl;
                cout << "Total Salary  : Rs. " << totalSalary << endl;
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