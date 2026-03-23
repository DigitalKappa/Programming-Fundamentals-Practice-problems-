#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, userGuess;

    // Seed the random number generator
    srand(time(0));
    randomNumber = rand() % 100 + 1; // Random number between 1 and 100

    printf("Guess the number (between 1 and 100): \n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &userGuess);

        if (userGuess < 1 || userGuess > 100) {
            printf("Please enter a number between 1 and 100.\n");
            continue; // Skip to the next iteration of the loop
        }

        if (userGuess > randomNumber) {
            printf("Too high! Try again.\n");
        } else if (userGuess < randomNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the correct number: %d\n", randomNumber);
            break; // Exit the loop
        }
    }

    return 0;
}