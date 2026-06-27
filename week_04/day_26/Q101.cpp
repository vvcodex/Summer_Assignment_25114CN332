// Write a program to create a number guessing game.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int secret = rand() % 100 + 1;
    int guess;

    cout << "Guess the number (1 to 100): ";

    do {
        cin >> guess;

        if (guess > secret)
            cout << "Too High! Try Again: ";
        else if (guess < secret)
            cout << "Too Low! Try Again: ";
        else
            cout << "Congratulations! You guessed the correct number.";

    } while (guess != secret);

    return 0;
}