#include<stdio.h>
int main(){
	int n;
	printf("Write the number = ");
	scanf("%d",&n);
	int count = 0;
	for(int i=1; ; ){
		if(count<=n){
			i = i+3;
				printf("%d,",i);
				count++;
			}
		}
	return 0;
}