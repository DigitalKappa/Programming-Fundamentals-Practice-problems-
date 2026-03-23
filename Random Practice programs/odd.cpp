#include<stdio.h>
int main(){
	int n;
	printf("Write the number = ");
	scanf("%d",&n);
	int count = 0;
	for(int i=0; ; i++){
		if(count<n){
			if(i%2==1){
				printf("%d,",i);
				count++;
			}
		}
}
	return 0;
}