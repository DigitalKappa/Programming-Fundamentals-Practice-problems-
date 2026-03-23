 //Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours. Assume that employees do not work for 
 //fractional part of an hour.
 #include<iostream>
 using namespace std;
 int main(){
 int i=1;
 int totalwork, salary;
   while(i<=10){
   	   cout<<endl;
   	  cout<<"Write the total working hour of employ "<<i<<" = ";
   	  cin>>totalwork;
   	  if(totalwork>40){
   	  	   salary = (totalwork - 40)*12;
   	  	   cout<<"The total overtime salary of employ "<<i<<"is "<<salary<<endl;
		 }
	  else
	       cout<<"The employ "<<i<<"don't overworked "<<endl;
     i++;
   }
 	return 0;
 }