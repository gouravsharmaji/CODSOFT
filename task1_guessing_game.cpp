#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1; // Random number between 1 and 100
    int guess, attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";

    do {
        cout << "Enter your guess (1 to 100): ";
        cin >> guess;
        attempts++;

        if (guess < number)
            cout << "Too low! Try again.\n";
        else if (guess > number)
            cout << "Too high! Try again.\n";
        else
            cout << "Congratulations! You guessed it in " << attempts << " attempts.\n";
    } while (guess != number);

    return 0;
}

