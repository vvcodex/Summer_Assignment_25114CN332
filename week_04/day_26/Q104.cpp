// Write a program to create a quiz application.

#include <iostream>
using namespace std;

int main() {
    int answer;
    int score = 0;

    cout << "===== Simple Quiz Application =====\n\n";

    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\n2. Which language is used for C++ programming?\n";
    cout << "1. HTML\n2. Python\n3. C++\n4. CSS\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\n3. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\nYour Score = " << score << " out of 3" << endl;

    if (score == 3)
        cout << "Excellent!";
    else if (score == 2)
        cout << "Good Job!";
    else
        cout << "Keep Practicing!";

    return 0;
}