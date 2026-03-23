#include <stdio.h>

int main() {
    int number;

    do {
        printf("Enter a positive integer (or enter 0 to exit): ");
        scanf("%d", &number);

        if (number < 0) {
            printf("Please enter a positive integer.\n");
            continue; // Skip to the next iteration
        }

        if (number == 0) {
            break; // Exit the loop if the user enters 0
        }

        int count = 0;
        int temp = number;

        while (temp > 0) {
            temp /= 10; // Remove the last digit
            count++; // Increment digit count
        }

        printf("The number of digits in %d is: %d\n", number, count);
    } while (1); // Infinite loop until the user exits

    return 0;
}