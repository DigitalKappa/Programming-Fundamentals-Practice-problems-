//#include<stdio.h>
#include <fstream>
#include <iostream>
using namespace std;
int main(){
//	FILE *ptr;
//	ptr = fopen("input.txt","r");
//	int count = 0;
//	char c[1];
//	while((c = fgetc(ptr)) != EOF){ 
//	count++;
//	 }
//	 	
//	 fclose(ptr);
//	 
//
//	printf("The total number of the Charcters in the file = %d ",count);

ofstream txt("humais.txt",ios::app)
txt.open();
if(!txt.open())
{
	cout<<"Don't open file";
}
else
{
	string line;
	cout<<"Enter Line:";
	cin>>line;
	txt<<line<<endl;
}
txt.close();
		
		
	return 0;
}