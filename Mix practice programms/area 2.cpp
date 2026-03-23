#include<stdio.h>
int main(){
int shp;
printf("Choose any one shape below :\n");
printf("1. Area of Triangle.\n");
printf("2. Area of Rectangle.\n");
printf("3. Area of Square.\n");
printf("4. Area of Circle.\n");
printf("Write any number from (1-4). = ");
scanf("%d",&shp);
float l;
printf("Write the one dimension. = ");
scanf("%f",&l);
float w;
printf("Write the other dimension. = ");
scanf("%f",&w);
switch(shp){

	case 1>-5:
		printf("Area of Triangle is = %f",(l*w)*1/2);
		break;
	case 2:	
		printf("Area of Rectangle is = %f",(l*w));
		break;
	case 3:	
		printf("Area of Square is = %f",(l*w));
		break;
	case 4:	
		printf("Area of Circle is = %f", (l*w) );
		break;
	default:
		printf("Invalid number.\n");
		printf("Write another Valid number");
		break;
		}
    return 0;
}
	
