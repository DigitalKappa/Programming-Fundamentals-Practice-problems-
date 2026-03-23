#include<stdio.h>
void count(int x){
	int step = 0;
	int n=x;
	for(;n>=0;){
		n = n/10;
		
		step++;
	}
	printf("%d",step);
}
int main(){
		int a;
		printf("Write any number = ");
		scanf("%d",&a);
		count(a);
	return 0;
}