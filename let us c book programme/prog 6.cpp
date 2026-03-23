 //Write a program to find the range of a set of numbers entered through the keyboard. Range is the difference between the smallest and biggest number in the list.
 #include<stdio.h>
 int main(){
 	int a[10];
 	int max = 0;
 	int min ;
 	int result;
 	printf("Write the set of 10 numbers = \n");
 	for(int i=0; i<10 ; i++){
 		scanf("%d",&a[i]);
	 }
	 for(int i=0; i<10 ; i++){
	   if(a[i]>max){
	   	  max = a[i];
	   }
		 if(a[i]<min){
		   	min = a[i];
		   }
	 }
	 result = max - min;
	 printf("%d , %d ", max , min);
	 printf("The range of given set of numbers is = %d",result);
 	return 0;
 }