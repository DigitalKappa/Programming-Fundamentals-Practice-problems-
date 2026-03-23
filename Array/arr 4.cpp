#include<stdio.h>
int main(){
	int c[10] = {23,56,78,34,23,58,98,31,54,29};
			int even = 0;
			int odd = 0;
	 for(int a=0; a<10 ; a++){
	 	if(c[a]%2==0){
	 		 even++;
		}
	 	else 
	 		 odd++;
     }
    	  printf("The Total Number of Even are = %d\n",even);
    	  printf("The Total Number of Odd are = %d",odd);
    	  return 0;
}