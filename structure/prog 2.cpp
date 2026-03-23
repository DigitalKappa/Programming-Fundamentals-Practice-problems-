#include<stdio.h>
struct student{
	char name[20];
	int roll_no ;
	float marks;
};	
int main(){
	struct student std[5];
	for(int i=1; i<=5; i++ ){
		printf("Write the details of Student %d :\n",i);
		
		printf("Write your name =  ");
		scanf(" %[^\n]",std[i].name);
		printf("Write your roll number = ");
		scanf("%d",&std[i].roll_no);
		printf("Write your gain marks = ");
		scanf("%f",&std[i].marks);
	
		printf("\n");
	}		
		printf("The information of students are given below:\n\n");
	
	for(int i=1; i<=5; i++ ){
		printf("Write the details of Student %d :\n",i);
		printf("%s\n",std[i].name);
		printf("%d\n",std[i].roll_no);
		printf("%f\n",std[i].marks);
		
	}
	return 0;
}