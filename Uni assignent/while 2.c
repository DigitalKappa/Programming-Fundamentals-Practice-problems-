#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1; // Use long long to handle large factorials

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Validate input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1; // Exit with error
    }

    // Calculate factorial
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %llu\n", n, factorial);

    return 0;
}