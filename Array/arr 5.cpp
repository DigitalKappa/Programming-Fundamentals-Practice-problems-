#include<stdio.h>
int main(){
	int c[10] = {23,56,78,34,23,58,98,31,54,29};
			int even = 0;
			int odd = 0;
	 for(int a=0; a<10 ; a++){
	 	if(c[a]%2==0){
	 		 even = even + c[a];
		}
	 	else 
	 		 odd = odd + c[a];
     }
     int result = even - odd  ;
    	  printf("The Sum of all Even numbers are = %d\n",even);
    	  printf("The Sum of all Odd numbers are = %d\n",odd);
    	  printf("The Difference between Even and Odd is = %d",result);
    	  return 0;
}