#include<stdio.h>
int main(){
	int a ;
	printf("Write any number");
	scanf("%d",&a);
	int b ;
	printf("Write another number");
	scanf("%d",&b);
	int even = 0;
	int odd = 0;
for( ; a<=b ;a++){
	if(a%2==0)
      even++;
    else
      odd++;
             }
printf("Total even numbers are = %d\n",even);
printf("Total odd numbers are = %d",odd);   

}