#include<stdio.h>
int main(){
	int sum ,i,sub;
	int first;
	int sec;
	int opr;
	printf("Enter the first number : ");
	scanf("%d",&first);
	printf("Enter the second number : ");
	scanf("%d",&sec);
	
	printf("Select the operations given below :\n");
	printf("1.addition\n");
	printf("2.subtraction\n");
	scanf("%d",&opr);
	
	switch(opr){
		case 1:
			for(int i = first;i <= first + sec;i++){
				
				sum = i;
				
			}
		printf("the sum of numbers is %d",sum);	
			break;
		case 2:
			for(int i = first;i >= first - sec;i--){
				
				sub = i;
				
				
			}
			printf("the sum of numbers is %d",sub);
			break;
			default:
				printf("Invalid Input");
			
	}	
	
	return 0;
}