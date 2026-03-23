#include <stdio.h>

int main() {
    int limit;

    while (1) {
        printf("Enter a limit (0 to exit): ");
        scanf("%d", &limit);

        if (limit == 0) {
            printf("Exiting the program.\n");
            break;
        }

        printf("Odd numbers from 1 to %d are:\n", limit);
        for (int i = 1; i <= limit; i++) {
            if (i % 2 != 0) { // Check if the number is odd
                printf("%d ", i);
            }
        }
        printf("\n"); // New line for better output formatting
    }

    return 0;
}