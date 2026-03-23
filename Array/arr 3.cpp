#include<stdio.h>
	int b[5] ;
int main(){
	int result = 1;
	for(int a=0; a<5 ; a++){
	    printf("Write any number = ");
		scanf("%d",&b[a]);
	}
	for(int c=0; c<5 ; c++){
		result = result * b[c];
	}
	printf("The product of all numbers is = %d", result );
	return 0;
}
