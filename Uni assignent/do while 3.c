#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int roll;
    char choice;

    // Seed the random number generator
    srand(time(0));

    do {
        roll = rand() % 6 + 1; // Roll a die (1-6)
        printf("You rolled: %d\n", roll);
        printf("Do you want to roll again? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}