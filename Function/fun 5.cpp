//Write a function that takes an integer as input and returns the number of digits in that integer. For 
//example, the number 12345 should return 5.
#include<stdio.h>
void count(int);
int main(){
		int a;
		printf("Write any number = ");
		scanf("%d",&a);
		count(a);
		return 0;
}
    void count(int x){
		int step = 0;
		int n=x;
		for(;n>0;){
			n = n/10;
			step++;
		}
		printf("%d",step);
	}