// Function to Print Fibonacci Series.
#include<stdio.h>
void fibonaci(int);
int main(){
	int a;
	printf("Write any number = ");
	scanf("%d",&a);
	fibonaci(a);
	return 0;
}
void fibonaci(int x){
	int i=0;
	int result = 1;
	int step = 0;
	do{
	   result = step + i;
		step++;
		printf("%d\n",result);
		i = result;
		
	}while(step<x);
}