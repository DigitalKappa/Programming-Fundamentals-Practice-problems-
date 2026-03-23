#include<stdio.h>
int main(){
	int x, y, result=1;
	printf("Write the base number = ");
	scanf("%d",&x);
	printf("Write the power number = ");
	scanf("%d",&y);
	
	for(int i=1; i<=y ; i++){
		result = result * x;
	}
	printf("The result of %d to the power %d is = %d", x,y, result );
	
	return 0;
}