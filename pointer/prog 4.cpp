//Write a program to declare an array of integers. Use pointer arithmetic to print the second and fourth elements of the array.
#include<stdio.h>
int main(){
	int arr[5] = {1, 3, 5, 7, 10};
	int *xptr;
	
	 xptr = arr;
	 printf("The second element of array is = \n");
     printf("%d ,",*(xptr+1));
  
     printf("The fourth element of array is = ");
     printf("%d ,",*(xptr+3));

	return 0;
}