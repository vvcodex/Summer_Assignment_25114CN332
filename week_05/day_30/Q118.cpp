// Write a program to create a mini library system.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string bookName[5];
    int choice, n = 0;

    do {
        cout << "\n===== Mini Library System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (n < 5) {
                    cout << "Enter Book Name: ";
                    cin >> bookName[n];
                    n++;
                    cout << "Book Added Successfully!\n";
                } else {
                    cout << "Library is Full!\n";
                }
                break;

            case 2:
                if (n == 0) {
                    cout << "No Books Available.\n";
                } else {
                    cout << "\n----- Book List -----\n";
                    for (int i = 0; i < n; i++) {
                        cout << i + 1 << ". " << bookName[i] << endl;
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