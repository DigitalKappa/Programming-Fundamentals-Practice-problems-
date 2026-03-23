 //Function to Reverse a Number,
 #include<stdio.h>
 void rev(int);
 int main(){
 	int a;
 	printf("Write any number = ");
 	scanf("%d",&a);
 	rev( a);
 }
 void rev(int x){
 	int arr[4];

 	for( int i=0; x>i ;i++ ){
 		arr[i]= x%10;
	 }
	 for(int j=3; j<=0; j--){
	 	printf("%d",arr[j]);
	 }
 }