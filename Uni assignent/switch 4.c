#include <stdio.h>

int main() {
    int units;
    float billAmount;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    
    switch (units / 100) {
        case 0: 
            billAmount = units * 1.5;
            break;
        case 1:  
            billAmount = units * 2.0;
            break;
        case 2:  
            billAmount = units * 3.0;
            break;
        default: 
            billAmount = units * 5.0;
            break;
    }

    printf("Total Bill Amount: %.2f\n", billAmount);

    return 0;
}