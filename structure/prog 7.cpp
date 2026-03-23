#include<stdio.h>

struct date{
	int day;
	int month;
	int year;
};
int main(){
	struct date d;
	
	printf("Write the date = ");
	scanf("%d",&d.day);
	printf("Write the month = ");
	scanf("%d",&d.month);
	printf("Write the year = ");
	scanf("%d",&d.year);
	printf("\n");
	printf("The date is given as :  %d/%d/%d.",d.day,d.month,d.year);
	
	return 0;
}