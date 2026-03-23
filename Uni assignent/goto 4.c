#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, number;

    // Initialize random number
    srand(time(0));
    number = rand() % 10 + 1;

guess_again:
    printf("Guess the number (1-10) or enter 0 to quit: ");
    scanf("%d", &guess);

    if (guess == 0) {
        printf("Game exited.\n");
        return 0;
    } else if (guess == number) {
        printf("Congratulations! You guessed the correct number.\n");
        return 0;
    } else {
        printf("Incorrect. Try again.\n");
        goto guess_again;
    }
}