#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Write the value of x = ";
	cin>>x;
int result ;
int a = 12 * (x*x*x);
       a = a / 4 * x;
int b = 8 * (x*x);
     b = b / 4 * x;
int c = x / 8 * x ;
int d = 1 / x;
  cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;
  result= a+b+c+d;
    cout << result;
    return 0;
}