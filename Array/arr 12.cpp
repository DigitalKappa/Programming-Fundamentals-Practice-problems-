//Write a program to perform addition of two matrices
#include<stdio.h>
int main(){
	int m1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int m2[3][3] = {{2,3,5},{6,8,9},{4,7,2}};
	int final[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			final[i][j]=m1[i][j]+m2[i][j];
		}
	}
		printf("The resultant matrix = \n");
	  	for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				printf("%d  ", final[i][j]);
			}
			printf("\n");
        }
        return 0;
}