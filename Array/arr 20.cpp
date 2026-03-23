//Write a program to find the intersection of two arrays.
#include<stdio.h>
int main(){
	int final[5]= {0};
	int a[5];
	int ct=0;
	for(int b=0; b<5; b++){
		printf("Write the number of 1st array = ");
		scanf("%d",&a[b]);
	}
	printf("\n");
	int d[5];
	  for(int c=0; c<5; c++){
			printf("Write the number of 2nd array = ");
			scanf("%d",&d[c]);
		}	 	
		 for(int f=0; f<5 ; f++){
			for(int e=0; e<5; e++){
					if(a[f]==d[e]){
					  final[ct] = a[f];
					  ct++;
					  break;
					}
			}
		}
		printf("The intersection of two arays = ");
			for(int h=0; h<ct; h++){
			      printf("%d,",final[h]);
		    }
		 return 0;
}