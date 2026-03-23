#include<iostream>
using namespace std;
int main(){
    int i = 1;
	if(i==1)
		cout<<i<<" is Odd"<<endl;
	for( i = 2 ; i<=20 ; i++){
	    	
        	int count = 0;
	for(int b = 2; b<i ; ){
			   if(i%b==0){ 
		 		count++;}
			    b++;
	}
					}
			if(count==0)
		     	cout<<i<<" is Prime , ";
		     if(i%2!=0){
		    	cout<<i<<" is Odd."<<endl; } 	
			
	}
	
	return 0;

}