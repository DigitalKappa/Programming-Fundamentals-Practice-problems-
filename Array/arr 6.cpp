#include<stdio.h>
int main(){
	int a[10] = {12,3,5,7,9,15,18,19,20,17};
	int b;
	printf("write any number(between 1-20 = ");
	scanf("%d",&b);
 for(int c=0; c<10; c++){
 	
	 if(b == a[c]){
		printf("The index of your number is = %d",c);
		return 0;
	}
 }
 	printf("Your number is not present in the array");
     
	return 0;
}