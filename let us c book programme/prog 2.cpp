//Write a program to find the factorial value of any number entered through the keyboard.
#include<stdio.h>
int main(){
	int a;
	printf("Write the number whose factorial you want to find = ");
	scanf("%d",&a);
	int i = a;
	int result = 1;
	while(i>=1){
	   	 result = result * i;
	   	 i--;
	}
	printf("The factoral of %d = %d",a, result);
	return 0;
}