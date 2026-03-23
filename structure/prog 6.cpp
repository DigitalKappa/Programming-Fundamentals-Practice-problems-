#include<stdio.h>
struct  rectangle{
	float length;
	float width;
};

int main(){
	float final;
	struct rectangle rec;
	printf("Write the details of the rectangle:\n");
	
	printf("Write the length of rectangle = ");
	scanf("%f",&rec.length);
	printf("Write the width of the rectangle = ");
	scanf("%f",&rec.width);
	
    final =	rec.length*rec.width;
	printf("The Area of the rectangle = %.2f",final);
	
	return 0;
}