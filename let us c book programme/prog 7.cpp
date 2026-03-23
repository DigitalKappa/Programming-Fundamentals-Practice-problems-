//Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative and zeros entered.
#include <stdio.h>
int main() {
    int number;
    int positive ;
    int negative ;
    int zero ;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > 0) {
            positive++;
        } else if (number < 0) {
            negative++;
        } else {
            zero++;
        }

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("Count of positive numbers: %d\n", positive);
    printf("Count of negative numbers: %d\n", negative);
    printf("Count of zeros: %d\n", zero);

    return 0;
}
