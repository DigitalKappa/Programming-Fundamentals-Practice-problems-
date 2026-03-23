//Write a program to find the second largest element in an array
#include <stdio.h>
int main (){
	int n ,temp;
	printf("Enter the size of array = ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter the array\n");
	for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
                  }
                  
    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		if(arr[i]>arr[j]){
    			temp = arr[i];
    			arr[i]=arr[j];
    			arr[j]=temp;
    	       	}
			}
		}
		
	printf("The second largest number is = ");
       for(int i=n-1; i>=0; i--){
       	for(int j=n-2;j>=0;j--){
       		if(arr[i]>arr[j]){
       			printf("%d",arr[j]);
       			break;
			   }
			   break;
	  	 }
	}

		return 0;
	}