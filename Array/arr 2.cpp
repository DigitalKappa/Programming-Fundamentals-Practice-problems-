#include<stdio.h>
int main(){
	int a[5];
	for(int c=0; c<5 ; c++){
		printf("Write the number = ");
		scanf("%d",&a[c]);
	}
	for(int x=0; x<5 ; x++){
		printf("%d ,",a[x]);
	}
	return 0;
	}