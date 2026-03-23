#include<stdio.h>
int main(){
	int a[10] = {2,5,7,9,12,13,15,17,19,20};
		printf("The reverse of array is = ");
	for(int c=9; c>=0; c--){
		printf("%d,",a[c]);
	}
	return 0;
}