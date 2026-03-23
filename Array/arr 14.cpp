//Write a program to multiply two matrices.
#include <stdio.h>
int main() {
    int num1, num2, num3;

    printf("Enter the row of matrix 1 = ");
    scanf("%d", &num1);

    printf("Enter the column of matrix 1 and row of matrix 2 = ");
    scanf("%d", &num2);

    printf("Enter the column of matrix 2 = ");
    scanf("%d", &num3);


    int matrix1[num1][num2];
    int matrix2[num2][num3];
    int sum;


    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < num1; i++) {
        for (int j = 0; j < num2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

 
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < num2; i++) {
        for (int j = 0; j < num3; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < num1; i++) {
        for (int j = 0; j < num3; j++) {
            sum = 0;
            for (int k = 0; k < num2; k++) {
                sum = sum +  matrix1[i][k] * matrix2[k][j];
            }
            printf("%d\t", sum);
        }
        printf("\n");
    }

    return 0;
}