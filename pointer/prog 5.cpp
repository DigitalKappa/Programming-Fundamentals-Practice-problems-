//Write a program to demonstrate the concept of a pointer to a pointer by printing the value of a variable using two levels of pointers.
#include<stdio.h>
int main(){
	int a = 10;
	int *xptr ;
	int **yptr;
	
     xptr  =  &a;
     yptr =  &xptr;

   printf("The value of variable by pointer to pointer = %d",**yptr);
	
	return 0;
}