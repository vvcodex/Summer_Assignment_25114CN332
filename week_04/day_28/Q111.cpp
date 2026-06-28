// Write a program to create a ticket booking system.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice, tickets;
    string name;
    float ticketPrice = 500, totalAmount;

    do {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display Booking Details\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Customer Name: ";
                cin >> name;

                cout << "Enter Number of Tickets: ";
                cin >> tickets;

                totalAmount = tickets * ticketPrice;

                cout << "Ticket Booked Successfully!\n";
                break;

            case 2:
                cout << "\n----- Booking Details -----\n";
                cout << "Customer Name    : " << name << endl;
                cout << "Tickets Booked   : " << tickets << endl;
                cout << "Price Per Ticket : Rs. " << ticketPrice << endl;
                cout << "Total Amount     : Rs. " << totalAmount << endl;
                break;

            case 3:
                cout << "Thank you for using the Ticket Booking System.\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
}