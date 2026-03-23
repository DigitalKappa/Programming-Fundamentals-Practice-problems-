#include<stdio.h>
void prime(int);
int main(){
	int a;
	printf("Write any number = ");
	scanf("%d",&a);
	prime(a);
}
void prime(int x){
	int count = 0;
	for(int b=2; b<x ; b++){
		if(x%b==0){
		count++;}
	}
	if(count==0)
    printf("Your number is prime");
    else 
     printf("Your number is not prime");
}