#include <stdio.h>

int main() {
    int num, start, end;

    printf("Enter the number for the multiplication table: ");
    scanf("%d", &num);

    printf("Enter the starting value: ");
    scanf("%d", &start);

    printf("Enter the ending value: ");
    scanf("%d", &end);

    printf("Multiplication Table for %d:\n", num);
    for (int i = start; i <= end; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}