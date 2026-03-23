#include<stdio.h>
int main(){
	int a[10] = {2,5,6,7,8,15,10,14,16,19};
	int sum = 0;
	int avg;
	for(int b=0; b<10;b++){
		sum = sum + a[b];
	}
	printf("The is sum of all the array numbers = %d\n",sum);
	avg = sum/10;
	printf("The average of all numbers presnet in the array = %d",avg);
	return 0;
}