#include<stdio.h>
int main (){
	int a;
	printf("Write first number = ");
	scanf("%d",&a);
	int b;
	printf("Write second number = ");
	scanf("%d",&b);	
	int result = 0;
	int step = 0;
	int d = 2;
for(; a<=b ; a++){
   code:
        if(a>d){
        	if(a%d==0){
      	step++;   
      	}
         d++;
        goto code;}
    if(step==0){
    	printf("Number %d is prime\n",a);
    	for(int c = 1; c<=10 ;c++){
    		result = a*c;
    		printf("%d,",result);
		}
		printf("\n");
	}
	else
	    printf("Number %d is not prime\n",a);
	     d = 2;
     	step = 0;
}
    
    return 0;
}