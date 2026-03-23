//Write a program to swap two numbers using a function and pointers.
#include<stdio.h>
void swap(int* , int*);
int main(){
	int a,b;
		printf("Write the first number :\n");
		scanf("%d",&a);
		printf("Write the second number :\n");
		scanf("%d",&b);
	
	swap(&a , &b);
	
		printf("%d\n",a);
		printf("%d",b);
	return 0;
}
 void swap(int *x , int *y){
	int temp;
   	temp = *x;
   	*x = *y ;
   	*y = temp;
}