#include<stdio.h>
int main(){
	FILE *ptr;
	ptr = fopen("input.txt","w");
	fprintf(ptr,"My name is Humais Ali Siddqui Sahb.");
	fclose(ptr);
	return 0;
}