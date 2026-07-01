// Write a program to create a student record system using arrays and strings.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int roll[n];
    string name[n];
    float marks[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll Number: ";
        cin >> roll[i];

        cout << "Name: ";
        cin >> name[i];

        cout << "Marks: ";
        cin >> marks[i];
    }

    cout << "\n===== Student Records =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number : " << roll[i] << endl;
        cout << "Name        : " << name[i] << endl;
        cout << "Marks       : " << marks[i] << endl;
    }

    return 0;
}