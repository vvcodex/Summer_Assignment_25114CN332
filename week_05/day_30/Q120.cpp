// Write a program to develop a complete mini project using arrays, strings and functions.

#include <iostream>
#include <string>
using namespace std;

const int MAX = 5;

int roll[MAX];
string name[MAX];
float marks[MAX];
int count = 0;

void addStudent() {
    if (count == MAX) {
        cout << "Student Record is Full!\n";
        return;
    }

    cout << "Enter Roll Number: ";
    cin >> roll[count];

    cout << "Enter Name: ";
    cin >> name[count];

    cout << "Enter Marks: ";
    cin >> marks[count];

    count++;
    cout << "Student Record Added Successfully!\n";
}

void displayStudents() {
    if (count == 0) {
        cout << "No Student Records Found.\n";
        return;
    }

    cout << "\n----- Student Records -----\n";

    for (int i = 0; i < count; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number : " << roll[i] << endl;
        cout << "Name        : " << name[i] << endl;
        cout << "Marks       : " << marks[i] << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
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