#include<stdio.h>
int main(){
	int n;
	printf("Write the number = ");
	scanf("%d",&n);
	int count = 0;
	int a = 2;
	int result = 1;
	int final ;
		while(count<n){
				printf("%d,",result);
	            final = result + result;    
				result = final;  
				count++;
				}
	return 0;
}