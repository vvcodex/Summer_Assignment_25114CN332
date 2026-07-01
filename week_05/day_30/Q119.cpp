// Write a program to create a mini employee management system.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int empId[5];
    string empName[5];
    float salary[5];
    int choice, n = 0;

    do {
        cout << "\n===== Mini Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (n < 5) {
                    cout << "Enter Employee ID: ";
                    cin >> empId[n];

                    cout << "Enter Employee Name: ";
                    cin >> empName[n];

                    cout << "Enter Salary: ";
                    cin >> salary[n];

                    n++;
                    cout << "Employee Added Successfully!\n";
                } else {
                    cout << "Employee List is Full!\n";
                }
                break;

            case 2:
                if (n == 0) {
                    cout << "No Employee Records Available.\n";
                } else {
                    cout << "\n----- Employee Records -----\n";
                    for (int i = 0; i < n; i++) {
                        cout << "Employee " << i + 1 << endl;
                        cout << "ID     : " << empId[i] << endl;
                        cout << "Name   : " << empName[i] << endl;
                        cout << "Salary : Rs. " << salary[i] << endl;
                        cout << endl;
                    }
                }
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