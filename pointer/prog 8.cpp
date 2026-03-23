//Write a program to find the largest element in an array using pointers.
#include<stdio.h>
int main(){
	int arr[10] = {20, 52, 1299, 525, 126, 32, 89, 14, 26, 50};
	int *ptr;
	int max ;

	ptr = arr;
		for(int i=0; i<9; i++){
			if(*(ptr+i)>max){
				max = *(ptr+i);
			}
		}
		printf("The largest number of the array is = %d",max);
	
	return 0;
}