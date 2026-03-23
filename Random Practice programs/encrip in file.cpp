#include<stdio.h>
#include<string.h>

void encryption(char res[100], char key[100]);

int main(){
	char arr[100];
	printf("Write the data that you want to encrypt = "); 
	scanf(" %[^\n]",arr);
	
	char k[100];
	printf("Write your private key...   ");
	scanf(" %[^\n]",k);
	 
	  encryption(arr , k );
	
	return 0;
}

void encryption(char res[100] , char key[100] ){
	char encr[100];
	int keylength = strlen(key);
	int stringlength = strlen(res);
	
	int op;
		printf("1. Want to encript the data.\n");
		printf("2. Exit.\n"); 
	    printf("Select any of option [1,2] = ");
	    scanf("%d",&op);
	switch(op){
	    	
	  case 1:
		  for(int i=0; i<stringlength; i++){
		       encr[i] = (res[i] + 32) ^ key[i % keylength];
		 	 }
		    encr[stringlength] = '\0';
		    printf("\n");
		    printf("Your Encrypted  data is given as  =  %s ",encr);
	        break;
	  case 2:
	  		printf("Thank you for your respone.");
	  	    break;
	  	
	  default:
	     	printf("Invalid Entry try again..");
	    	break;
	}	
}

