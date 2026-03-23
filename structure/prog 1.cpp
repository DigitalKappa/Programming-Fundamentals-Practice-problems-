#include<stdio.h>
struct student{
	char name[20];
	int roll_no ;
	float marks;
};	

int main(){
  struct student std;
	printf("Write your name =  ");
	scanf(" %[^\n]",std.name);
	printf("Write your roll number = ");
	scanf("%d",&std.roll_no);
	printf("Write your gain marks = ");
	scanf("%f",&std.marks);
	
	printf("The information of student is given below:\n\n");
	
	printf("Write your name = %s\n",std.name);
	printf("Write your roll number = %d\n",std.roll_no);
	printf("Write your gain marks = %f\n",std.marks);
	
	return 0;
}