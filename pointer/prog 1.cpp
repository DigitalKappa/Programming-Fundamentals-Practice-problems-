//Write a program to declare an integer variable, assign it a value, and print its value and address using a pointer.
#include<stdio.h>
int main(){
int a = 12;

printf("The value of a = %d\n", a);
printf("The adress of a = %d", &a);
return 0;
}