//Write a program to create a file named data.txt and write the string "Hello, World!" to it..
#include<Stdio.h>
int main(){
	FILE *ptr;
	ptr = fopen("data.txt","a");
	
	fprintf(ptr,"Hello, World!\n How are you ? I am good and nice\n If you are good then it is nice \n You are good enough to understand me about the error and goodness and after that it is good.");
	
	fclose(ptr);
	
	return 0;
}