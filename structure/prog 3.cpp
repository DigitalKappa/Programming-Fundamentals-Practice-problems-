#include<Stdio.h>
#include<String.h>
struct Employee{
	char name[50];
	int  id ;
	float salary ;
 };
int main(){
 struct Employee std[3];
 for(int i=0; i<3 ; i++){
 	printf("Write the details of Employ: %d\n\n ",i+1);
   
    printf("Write your name = ");
    scanf(" %[^\n]",std[i].name);
    
	printf("Write your ID = ");
    scanf("%d",&std[i].id);
    
	printf("Write your salary = ");
    scanf("%f",&std[i].salary);
}

 for(int i=0; i<3 ; i++){
 	printf("The details of Employ %d is given below:\n ",i+1);
	printf("Name = %s",std[i].name);
	printf("ID = %d\n",std[i].id);
	printf("Salary = %f",std[i].salary);
	printf("\n");
}
   return 0;	
}