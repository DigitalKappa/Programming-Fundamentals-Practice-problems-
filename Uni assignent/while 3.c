#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of odd numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { // Check if the number is odd
            sum += i;
        }
    }

    printf("The sum of odd numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}