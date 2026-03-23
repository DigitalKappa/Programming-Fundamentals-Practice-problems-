//Write a program to pass a pointer to a function.The function should increment the value of the variable by 10.
#include<stdio.h>
void function(int*);
int main(){
	int a = 10;
	int b = 20;
	function(&a);
	printf("%d\n",a);
	function(&b);
	printf("%d",b);
	
    return 0;
}
void function(int*x){
     (*x+=10);
}