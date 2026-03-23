//Write a program to find all pairs of elements in an array whose sum is equal to a given number.
#include<stdio.h>
int main(){
	int a[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int b;
		 printf("Write any number = ");
		 scanf("%d",&b);
	 for(int c=0; c<20; c++){
	 	for(int d=1; d<20;d++){
	 		if(a[c]+a[d]==b){
	 		    printf("The sum of pair (%d,%d)  = %d\n",a[c],a[d],b);
			 }
		 }
	 }
	 if(b>39){
    	printf("There is no number in the array whose sum is equal to your given number. ");
	 }
	  return 0;
}