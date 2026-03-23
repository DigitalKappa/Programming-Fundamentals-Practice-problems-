//Implement a program to find the transpose of a matrix.
#include<stdio.h>
int main(){
	int n1, n2;
		scanf("%d",&n1);
		scanf("%d",&n2);
	int temp[n1][n2];
	int m1[n1][n2];
	 printf("Write the number of rows and colums of matrix:\n");
		for(int i=0; i<n1; i++){
			for(int j=0; j<n2; j++)	{
				scanf("%d",&m1[i][j]);
			}
			printf("\n");
		}         
			for(int i=0; i<n2; i++){
					for(int j=0; j<n1; j++){
						printf("%d ",m1[j][i]);
					}
					printf("\n");
			}
			return 0;
		}
				  
				  
