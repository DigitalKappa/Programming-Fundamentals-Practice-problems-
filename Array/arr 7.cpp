#include<stdio.h>
int main(){
	int a[20] = {12,3,5,7,9,15,18,19,20,17,3,18,19,3,7,9,9,20,13,12};
	int b;
		printf("write any number(between 1-20 = ");
		scanf("%d",&b);
	int step = 0;
	for(int c=0; c<20; c++){
		 if(b == a[c]){
			step++;}
     }
    printf("Your selected number is %d times present in the array. ",step);
	 return 0;  
}