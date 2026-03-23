//Write a program to append the text "C programming is fun!" to an existing file named data.txt.
#include<stdio.h>
int main(){
	
	FILE *fpr;
	fpr = fopen("data.txt","a");
	
	fprintf(fpr,"C programming is fun!");
	
	fclose(fpr);
	
	return 0;
}