#include<stdio.h>
int main (){
int a = 1;
int b = 100;
 code:
	  if(a<=b){
	  	if(a%10==0){
		  printf("%d\n",a);
		   a++;} 
	    else {
	       a++;}
	       goto code;}
	   return 0;
}