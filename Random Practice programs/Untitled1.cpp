// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
int a;
cin>>a;
int result  = 0;
int sum = 0;
 while(a>=1){
       result = a%10;
       a =  a/10;
       cout<<result;
    sum = sum + result;
}
cout<<sum;
    return 0;
}