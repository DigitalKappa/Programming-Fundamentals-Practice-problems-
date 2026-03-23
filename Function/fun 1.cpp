// Simple Function to Calculate the Square of a Number
#include<stdio.h>
//make Function to find the square of number
  int square(){
  	int a;
    printf("Write the number whose square you want =  ");
    scanf("%d",&a);
  	int c= a * a;
  	printf("%d", c);
  	return c ;
}
int main(){
	 square();
     
	 return 0;
}
	