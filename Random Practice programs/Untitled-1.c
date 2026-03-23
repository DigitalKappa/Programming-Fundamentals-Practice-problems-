#include<stdio.h>

int unique(char [] );

int coounnt(char [] );

int main(){  
	char num[20];
	int result;
  
	printf("Write any string = ");
	scanf(" %[^\n]",num);
   
	result = unique(num);
	printf("\nThe total number of unique count in the string is  = %d",result);
	return 0;
}
int unique(char a[] ){
	int count = 0;
	int final = 0;
	double t;
	
	int b = coounnt(a);
	
	for(int i=0; i<b; i++){
	 	 count = 0;
	 	if(a[i]!=' '){
	 	 for(int j=i+1; j<b; j++){
		   	if(a[i]==a[j]){
		   		count++;
		   		t++;
		   		break;
	   		}
	   	}
	   	if(count==0){
	   	  for(int j=i-1; j>=0; j--){
		   	 if(a[i]==a[j]){
		   		count++;
		   		t++;
		   	 	 break;
	   		}
		  }
	   }
	
       if(count==0)
		 final++;	
	   }
	}
	printf("%x",t);

	return final;
}
int coounnt(char as[] ){
	int totaal;
	while(as[totaal]!='\0'){
		totaal++;
	}
	return totaal;
}