#include <iostream>
#include <cstdlib> // For rand() and srand() functions
#include <ctime>   // For time() function

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int userGuess, attempts = 0;

    cout << "Welcome to the Number Guessing Game by Nikhil!" << endl;

    do {
        // Ask the user to guess the number
        cout << "Enter your guess (between 1 and 100): ";
        cin >> userGuess;

        // Provide feedback on the guess
        if (userGuess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number in " << attempts + 1 << " attempts." << endl;
        }

        attempts++;

    } while (userGuess != secretNumber);

    return 0;
}
