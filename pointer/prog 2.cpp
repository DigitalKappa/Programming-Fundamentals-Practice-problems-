//Write a program to declare an array of 5 integers. Use a pointer to access and print all the elements of the array.
#include<stdio.h>
int main(){
	int arr[5];
	int *xptr;
	xptr = arr;

	printf("Write the value of array = \n");
	for(int i=0; i<5 ; i++){
		scanf("%d",&xptr[i]);
	}
	
	printf("The value of array is given below : \n");
	
	for(int i=0; i<5; i++){
		printf("%d,",xptr[i]);
	}
	
	
	return 0;
}