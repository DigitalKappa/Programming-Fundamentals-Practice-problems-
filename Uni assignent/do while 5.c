#include <stdio.h>

int main() {
    int number;

    do {
        printf("Enter a number to generate its multiplication table (or enter 0 to exit): ");
        scanf("%d", &number);

        if (number == 0) {
            break; // Exit if the user enters 0
        }

        printf("Multiplication table for %d:\n", number);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", number, i, number * i);
        }
        printf("\n"); // Extra newline for better output formatting
    } while (1); // Infinite loop until the user exits

    return 0;
}