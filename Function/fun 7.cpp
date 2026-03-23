 //Function to Find the GCD (Greatest Common Divisor)
#include<stdio.h>
void GCD(int,int);
int main(){
	int a,b;
 	printf("Write any number = ");
 	scanf("%d",&a);
 	printf("Write any number = ");
 	scanf("%d",&b);
 	GCD(a,b);
 	return 0;
}
void GCD(int x,int y){
	   for(int i=x; i>1;i--){
	   	if(x%i==0&&y%i==0){
	   		printf("%d",i);
	   		break;
		   }
	   }
}
