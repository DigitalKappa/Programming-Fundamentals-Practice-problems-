
#include <stdio.h>

int main() {
    int choice;
    float temperature, converted;

    printf("Temperature Conversion Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter temperature value: ");
    scanf("%f", &temperature);

    switch (choice) {
        case 1:
            converted = (temperature * 9.0 / 5.0) + 32;
            printf("%.2f Celsius is %.2f Fahrenheit\n", temperature, converted);
            break;
        case 2:
            converted = (temperature - 32) * 5.0 / 9.0;
            printf("%.2f Fahrenheit is %.2f Celsius\n", temperature, converted);
            break;
        case 3:
            converted = temperature + 273.15;
            printf("%.2f Celsius is %.2f Kelvin\n", temperature, converted);
            break;
        case 4:
            converted = temperature - 273.15;
            printf("%.2f Kelvin is %.2f Celsius\n", temperature, converted);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}

