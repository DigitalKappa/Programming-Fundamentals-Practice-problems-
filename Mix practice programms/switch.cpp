#include <stdio.h>
int main() {
int a;
printf("Write any number = ");
scanf("%d",&a);
int b;
printf("Write another number = ");
scanf("%d",&b);
char op ;
printf("Write any operator = ");
scanf(" %c",&op);
switch(op) {
        case '+':
        printf("Addition of two number %d+%d=%d",a,b,a+b);
        break;
       
        case '-':
        printf("Subtraction of two number %d-%d=%d",a,b,a-b);
        break;
       
        case '*':
        printf("Multiplication of two number %d*%d=%d",a,b,a*b);
        break;
      
        case '/':
        printf("Division of two number %d/%d=%d",a,b,a/b);
        break;
      
        defult:
        printf("Modulus of two number %d%%d=%d",a,b,a%b);
        break;
}

    return 0;
}