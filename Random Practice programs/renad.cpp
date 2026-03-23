#include<iostream>
using namespace std;
void func(int [] , int);

int main(){
	int n;
	cout<<"write the size of the array = ";
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	func(a,n);
	return 0;
}

void func(int x[], int c){
	for(int i=c-1; i>=0; i--){
		cout<<x[i];
	}
}