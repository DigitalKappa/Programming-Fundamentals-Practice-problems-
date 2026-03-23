#include <stdio.h>

int main() {
    int number, count = 0;

    printf("Enter positive integers (enter a negative integer to stop): \n");

    while (1) {
        scanf("%d", &number);
        
        if (number < 0) {
            break; // Exit the loop if a negative integer is entered
        }

        count++; // Increment the count for each positive integer
    }

    printf("You entered %d positive integers.\n", count);

    return 0;
}