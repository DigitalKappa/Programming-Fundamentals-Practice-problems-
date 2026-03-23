//Write a program to perform subtraction of two matrices
#include<stdio.h>
int main(){
	int n1,n2;
		scanf("%d",&n1);
		scanf("%d",&n2);
	
	int m1[n1][n2]; 
	printf("Write Rows and Columns of Matrix 1:\n");
	for(int i=0; i<n1; i++){
		for(int j=0; j<n2; j++){
		scanf("%d",&m1[i][j]);	
		}
		printf("\n");
	}
	int m2[n1][n2];
	printf("Write Rows and Columns of Matrix 2:\n");
	for(int i=0; i<n1; i++){
		for(int j=0; j<n2; j++){
		scanf("%d",&m2[i][j]);	
		}
		printf("\n");
	}
	int final[n1][n2];
	for(int i=0; i<n1; i++){
		for(int j=0; j<n2; j++){
			final[i][j]=m1[i][j] + m2[i][j];
		}
	}
		printf("The resultant matrix = \n");
	  	for(int i=0; i<n1; i++){
			for(int j=0; j<n2; j++){
				printf("%d  ", final[i][j]);
			}
			printf("\n");
        }
        return 0;
}