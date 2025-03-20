#include <iostream>
#include <cstdlib>  // For rand()
#include <ctime>    // For time()
using namespace std;

void guessGame() {
    static int attempts = 0;  // Static variable to count attempts
    const int secretNumber = 7;  // Fixed secret number (Can use rand() for random)
    
    int guess;
    cout << "Guess the secret number (1-10): ";
    cin >> guess;

    attempts++;  // Increment attempt count

    if (guess == secretNumber) {
        cout << "🎉 Congratulations! You guessed it right in " << attempts << " attempts!\n";
        attempts = 0;  // Reset attempts for next game
    } else {
        cout << "❌ Wrong guess! Try again.\n";
        if (attempts >= 3) {
            cout << "💀 Game Over! The secret number was " << secretNumber << ".\n";
            attempts = 0;  // Reset attempts for next game
        }
    }
}

int main() {
    cout << "🔹 Welcome to the Guessing Game! 🔹\n";
    
    char playAgain;
    do {
        guessGame();
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing! 🎮\n";
    return 0;
}
