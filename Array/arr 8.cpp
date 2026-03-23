#include<stdio.h>
int main(){
	int a[7] ;
    	printf("The numbers of array are = ");
	for(int b=0; b<7; b++){
		scanf("%d",&a[b]);
	}
	   printf("\nThe other array numbers are =  ");
	for(int c=0; c<7; c++){
		printf("%d,",a[c]);
	}
	return 0;
}