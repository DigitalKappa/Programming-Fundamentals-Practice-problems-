#include <stdio.h>
int main() {
    int matchsticks = 21;
    int user_pick, computer_pick;

    printf("Welcome to the Matchstick Game!\n");
    printf("There are 21 matchsticks.\n");
    printf("You can pick 1, 2, 3, or 4 matchsticks on your turn.\n");
    printf("Whoever is forced to pick up the last matchstick loses the game.\n");

    while (matchsticks > 1) {
        // User's turn
        printf("Your turn: Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &user_pick);

        // Validate user's pick
        if (user_pick < 1 || user_pick > 4) {
            printf("Invalid pick. Please pick 1, 2, 3, or 4 matchsticks.\n");
            continue;
        }

        matchsticks -= user_pick;
        printf("Matchsticks remaining: %d\n", matchsticks);

        // Check if user loses
        if (matchsticks == 1) {
            printf("You are forced to pick the last matchstick. You lose!\n");
            break;
        }

        // Computer's turn
        computer_pick = 5 - user_pick;
        matchsticks -= computer_pick;
        printf("Computer picks %d matchsticks.\n", computer_pick);
        printf("Matchsticks remaining: %d\n", matchsticks);

        // Check if computer loses
        if (matchsticks == 1) {
            printf("Computer is forced to pick the last matchstick. Computer loses!\n");
            break;
        }
    }

    return 0;
}
