// Write a program to create a bank account system.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice, accountNumber;
    string accountHolder;
    float balance = 0, amount;

    do {
        cout << "\n===== Bank Account System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Account Number: ";
                cin >> accountNumber;

                cout << "Enter Account Holder Name: ";
                cin >> accountHolder;

                cout << "Enter Initial Balance: ";
                cin >> balance;

                cout << "Account Created Successfully!\n";
                break;

            case 2:
                cout << "Enter Deposit Amount: ";
                cin >> amount;
                balance += amount;
                cout << "Amount Deposited Successfully!\n";
                break;

            case 3:
                cout << "Enter Withdrawal Amount: ";
                cin >> amount;

                if (amount <= balance) {
                    balance -= amount;
                    cout << "Amount Withdrawn Successfully!\n";
                } else {
                    cout << "Insufficient Balance!\n";
                }
                break;

            case 4:
                cout << "\n----- Account Details -----\n";
                cout << "Account Number : " << accountNumber << endl;
                cout << "Account Holder : " << accountHolder << endl;
                cout << "Balance        : Rs. " << balance << endl;
                break;

            case 5:
                cout << "Thank you for using the Bank Account System.\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}