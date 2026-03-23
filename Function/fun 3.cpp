#include<stdio.h>
int factor(int);
int main(){
	int x;
	scanf("%d",&x);
	int b = factor(x);
	printf("The fictorial of %d is %d",x,b);
}
factor(int a){
	int result = 1;
	for(int i=1;i<=a;i++){
		result = result * i;
	}
	return result;
	
}