// Function to Swap Two Numbers.
#include<stdio.h>
int  swap(int *x , int *y){
     int temp = *x;
     *x = *y;
     *y = temp;	
}
int main(){
	int a,b,temp;
	printf("Write the number = ");
	scanf("%d",&a);
	printf("Write the other number = ");
	scanf("%d",&b);
	
	printf("Before Swaping = %d, %d\n",a,b);
	swap(&a,&b);
	printf("After swaping = %d, %d",a,b);
	return 0;
}
	