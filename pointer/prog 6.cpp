//Write a program to allocate memory dynamically for an array of 5 integers using malloc. Input values from the user and print the elements.
#include<stdio.h>
int main(){
	int arr[5];
	int *ptr;
 	ptr = arr ;
	
	printf("Write the value of array :\n");
	for(int i=0; i<5 ; i++){
		scanf("%d",ptr+i);
	}
	
	printf("The value of array are givn below :\n"); 
	for(int i=0 ; i<5 ; i++){
		printf("%d,",*(ptr+i));
	}
	
	return 0;
}