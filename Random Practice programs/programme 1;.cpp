#include<stdio.h>
#include<string.h>
void temp(char,float ,float);
void days(char , float , float);
void day2(char , float , float);
int main(){
 struct day{
	 	char dayname[10][7];
	 	float tempmin[7];
	 	float tempmax[7];
	 };
   	  printf("Give the data for a week (7 days).\n");
for(int i=0; i<7 ; i++){
	  printf("Write the Day = ");
	  scanf("%s",&day.dayname[10][i]);
	  printf("Write the Maximum temperature in the day = ");
	  scanf("%f",&day.tempmin[i]); 
	  printf("Write the Minimum temperature in the day = ");
	  scanf("%f",&day.tempmax[i]);	
    }
 
	
	
	
	
	return 0;
}


