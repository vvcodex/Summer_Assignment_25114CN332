// Write a program to create a marksheet generation system.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int roll;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n===== MARKSHEET =====\n";
    cout << "Student Name : " << name << endl;
    cout << "Roll Number  : " << roll << endl;
    cout << "Total Marks  : " << total << "/500" << endl;
    cout << "Percentage   : " << percentage << "%" << endl;
    cout << "Grade        : " << grade << endl;

    if (grade == 'F')
        cout << "Result       : Fail" << endl;
    else
        cout << "Result       : Pass" << endl;

    return 0;
}