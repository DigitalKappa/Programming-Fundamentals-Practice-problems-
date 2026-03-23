#include <stdio.h>

int main() {
    int number;

try_again:
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) { // Check for invalid input
        printf("Invalid input. Try again.\n");
        getchar();  // Clear the invalid input
        goto try_again;
    }

    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    char choice;
    printf("Do you want to check another number? (y/n): ");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y') {
        goto try_again;
    }

    return 0;
}