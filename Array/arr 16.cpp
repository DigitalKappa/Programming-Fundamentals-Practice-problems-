//Write a program to find the second largest element in an array.
#include<stdio.h>
int main(){
	int a[10];
	for(int b=0; b<10; b++){
		printf("Write the number of array = ");
		scanf("%d",&a[b]);
	}
	int temp = 0;
	for(int i=0; i<10; i++){
		for(int j=i+1; j<10; j++){
		    	if(a[i]>a[j]){
		    		temp= a[i];
		    		a[i] = a[j];
		    		a[j] = temp;
				}
		}
	}
	  printf("The second largest number of array is = %d",a[8]);
	return 0;
}