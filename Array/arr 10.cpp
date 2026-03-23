#include<stdio.h>
int main(){
	int a[10] ;
	for(int y=0; y<10; y++){
		printf("Write the number of array = ");
		scanf("%d",&a[y]);
	}
	int max;
	int min = 0;
	for(int c=0; c<10; c++){
    	for(int b=0; b<10; b++){
             if(a[b]>max){
			 	max = a[b];
			 } 
		}
		      if(a[c]<max){
		    	min = a[c];
		     }
	}
	printf("The largest number in the array is = %d\n",max);
	printf("The smallest number in the array is = %d",min);
	return 0;
}