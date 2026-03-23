#include<iostream>
using  namespace std;
int main (){
int a;
for( a = 2 ; a<=20 ; a++){
int count = 0;
for(int b = 2; a>b ; b++  ){
	if(a%b==0){
      count++;}
}
  if(count==0)
  	cout<<a<<" is prime.";
  if(a%2==1) 
  	cout<<a<<" is Odd"<<endl;
}
  return 0;
}
	
	
	
