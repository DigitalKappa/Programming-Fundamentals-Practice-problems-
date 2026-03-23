#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int step = 0;
	for( ;step<a; ){
		for( ;a>1; ){
			a = a-2;
			step++;
		}
		cout<<a;
		a = step; 
		step = 0;
	}
	
	return 0;
}