//Implement a program to check if an array is a palindrome
#include<stdio.h>
int main(){
	  int a[7] ;
	for(int b=0; b<7; b++){
		printf("Write the value of the array = ");
		scanf("%d",&a[b]);
	}
   	  int step = 0;
		for(int c=0; c<3; c++){
			for(int d=6; d>3; d--){
				if(a[c]==a[d]){	
				 step++;
				}
			}
		}
		if(step==3){
			printf("Your array is palindrome.");
		}
		else 
		printf("Your array is not palindrome.");
		
	return 0;
}