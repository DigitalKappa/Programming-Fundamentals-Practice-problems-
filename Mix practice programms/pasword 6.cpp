#include<stdio.h>
#include<stdbool.h>
int main()
{
    int try = 1;
    bool A1B2C3 = true;
    char pas[10];
    printf("Your password is:\nA1B2C3\n");
    printf("Write password. = ");
    scanf("%s",&pas);
code:
    if(pas==true)
        printf("Your password is correct.");
    if(pas!=true && try<3) {
            printf("Invalid Password.\n");
            printf("Write password again. = ");
            scanf("%s",&pas);
            try++;
            goto code;
        }
    else
        printf("You have reached maximum number of attempts.");
    return 0;
}

