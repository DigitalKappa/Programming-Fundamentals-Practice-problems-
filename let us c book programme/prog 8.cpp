// Write a program to receive an integer and find its octal equivalent.
#include <stdio.h>
int main() {
    int a;
    printf("Write any number = ");
    scanf("%d", &a);
    int result;
    int octalNumber[10], i = 0;

    printf("The octal of %d is = ", a);
    while (a >= 1) {
        result = a % 8;
        a = a / 8;
        octalNumber[i] = result;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octalNumber[j]);
    }
    printf("\n");

    return 0;
}
