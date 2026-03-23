//Create a program to remove duplicate elements from an array.
#include<stdio.h>
int main(){
		int a[10];
		int remv = 0;
		int final[10];
        int duplicate;
	for(int b=0; b<10; b++){
		printf("Write the number of the array = ");
		scanf("%d",&a[b]);
	}
		for(int c=0; c<10; c++){
				duplicate = 0;
			for(int d=0; d<remv ;d++){
				if(a[c]==a[d]){
					duplicate = 1;
					break;
				}
}
				if(duplicate==0){
					final[remv]= a[c];
					remv++;
			}
		}
			printf("The final array after removal of duplicate elements = ");
	  			for(int g=0; g<remv; g++){
			printf("%d,",final[g]);
		}
    return 0;   
}