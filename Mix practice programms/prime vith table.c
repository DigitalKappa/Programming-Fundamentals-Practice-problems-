#include<stdio.h>
int main (){
	int a;
	printf("Write first number = ");
	scanf("%d",&a);
	int b;
	printf("Write second number = ");
	scanf("%d",&b);	
	int i = 2;
	int result = 0;
	int step ;

	int d = 2;
for(; i<=a ; i++){
         d = 2;
     	step = 0;
   code:
        if(i>d){
        	if(i%d==0){
      	step++;
  }
         d++;
        goto code;}
		
    if(step==0){
    	printf("Number %d is prime = \n",i);
    	for(int c = 1; c<=b ;c++){
    		result = i*c;
    		printf("%d,",result);
		}
		printf("\n");
	}
	else
	    printf("Number %d is not prime.\n",i);
	   
}
     return 0;
}