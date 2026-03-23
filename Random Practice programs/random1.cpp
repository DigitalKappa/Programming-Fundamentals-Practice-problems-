#include<Stdio.h>
void function(int );
int main(){
	int a;
  do{
	printf("Write your age = ");
	scanf("%d",&a);
	
	  if(a<=0)
	  	printf("Invalid Input , Please try again\n");

   }while(a<=0);
	 function(a);  
	
	return 0;
}
void function (int age){
	if(age<18){
		printf("You are not eligible to vote.");
	}
	if(age>=18){
		printf("You are eligible to vote.");
	}
}
