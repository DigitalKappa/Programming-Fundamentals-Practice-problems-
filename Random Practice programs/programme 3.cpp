#include<stdio.h>
int pass(int key);

int main(){
	int a;
	printf("Write the 5 number pasword = ");
	scanf("%d",&a);
 	pass(a);

	return 0;
}
 
 int pass(int key){
    int final[5];
    int step = 0;
	for(int i=0 ; i<5 ; i++){
		 final[i] = key%10;
		 key = key / 10;
		 step++;
	}
	printf("The reverse of your pasword is given below:\n");
		for(int i=0; i<5 ; i++){
			printf("%d,",final[i]);
		}
}