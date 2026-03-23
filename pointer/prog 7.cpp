//Write a program to reverse an array using pointers.
#include<stdio.h>
int main(){
	int arr[10] = {3,9,10,13,18,20,23,25,29,30};
	int *ptr;
	ptr = arr;
	
	printf("Write the element of array = ");
	for(int i=9; i>=0; i--){
		printf("%d, ",*(ptr+i));
	}

	return 0;
}