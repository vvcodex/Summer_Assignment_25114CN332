// Write a program to create a library management system.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice, bookId;
    string bookName, author;

    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Book\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Book ID: ";
                cin >> bookId;

                cout << "Enter Book Name: ";
                cin >> bookName;

                cout << "Enter Author Name: ";
                cin >> author;

                cout << "Book Added Successfully!\n";
                break;

            case 2:
                cout << "\n----- Book Details -----\n";
                cout << "Book ID     : " << bookId << endl;
                cout << "Book Name   : " << bookName << endl;
                cout << "Author Name : " << author << endl;
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