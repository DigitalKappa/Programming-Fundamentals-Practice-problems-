// Write a program to read and display the contents of a file named data.txt.
#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("data.txt","r");
    
    char string[1000];
    while(fgets(string,1000,ptr)){
    	printf("%s",string);
}
    fclose(ptr);
    
	return 0;
}