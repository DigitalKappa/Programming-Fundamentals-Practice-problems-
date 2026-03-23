#include <stdio.h>

int main() {
    int num1,num2,num3;
    printf("enter a number");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>=num2){
        if(num1>=num3){
            printf("num1 is greater");
            scanf("%d",&num1);
        }
    }
    else if(num2>=num1){
        if(num2>=num3){
            printf("num2 is greater");
                        scanf("%d",&num2);

        }
    }
    else {
        printf("num3 is greater");
                    scanf("%d",&num3);

    }
    
    
    
    
    
    return 0;
}