#include<stdio.h>
int main(){
FILE *fptr;

fptr = fopen("filename.exls", "a");

fprintf(fptr,"What is your name");
fprintf(fptr,"What is your age");
fclose(fptr);

  
}