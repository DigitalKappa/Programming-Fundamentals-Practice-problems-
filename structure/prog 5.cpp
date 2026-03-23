#include<Stdio.h>
struct  Product {
	char productName[50] ;
	float price ;
	float discount ;
};

int main(){
	float discount ;
	float final_p;
	struct Product pro;
	
	printf("WRITE THE DETAILS OF THE PRODUCT:\n\n");
	
	printf("Write the name of the product = ");
	scanf(" %[^\n]",pro.productName);
	printf("Write the price of the product = ");
	scanf("%f",&pro.price);
	printf("Write the discount of the product = ");
	scanf("%f",&pro.discount);
	
	discount = pro.price*(pro.discount/100);
	final_p = pro.price-discount;
	
	printf("The discounted price of a product is =  %.1f",final_p);
	
	return 0;
}