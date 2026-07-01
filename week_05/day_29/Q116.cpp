// Write a program to create an inventory management system.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice, itemId, quantity;
    string itemName;
    float price;

    do {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Item\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Item ID: ";
                cin >> itemId;

                cout << "Enter Item Name: ";
                cin >> itemName;

                cout << "Enter Quantity: ";
                cin >> quantity;

                cout << "Enter Price: ";
                cin >> price;

                cout << "Item Added Successfully!\n";
                break;

            case 2:
                cout << "\n----- Item Details -----\n";
                cout << "Item ID   : " << itemId << endl;
                cout << "Item Name : " << itemName << endl;
                cout << "Quantity  : " << quantity << endl;
                cout << "Price     : Rs. " << price << endl;
                break;

            case 3:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 3);

    return 0;
}