#include <stdio.h>

int main() {
    int choice;
    float amount, convertedAmount;

    printf("Currency Converter Menu:\n");
    printf("1. USD to PKR\n");
    printf("2. PKR to USD\n");
    printf("3. USD to EUR\n");
    printf("4. EUR to USD\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter the amount: ");
    scanf("%f", &amount);

    switch (choice) {
        case 1:
            convertedAmount = amount * 280.0;  // USD to PKR
            printf("Converted Amount: %.2f PKR\n", convertedAmount);
            break;
        case 2:
            convertedAmount = amount / 280.0;  // PKR to USD
            printf("Converted Amount: %.2f USD\n", convertedAmount);
            break;
        case 3:
            convertedAmount = amount * 0.85;   // USD to EUR
            printf("Converted Amount: %.2f EUR\n", convertedAmount);
            break;
        case 4:
            convertedAmount = amount / 0.85;   // EUR to USD
            printf("Converted Amount: %.2f USD\n", convertedAmount);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}