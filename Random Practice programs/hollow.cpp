// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    //for top part.
    for(int i=0; i<n; i++){
        for(int j=n-i; j>1; j--){
            cout<<" ";
        }
            cout<<"*";
            if(i!=0){
                for(int k=0; k<2*i-1;k++){
                    cout<<" ";
                }
                  cout<<"*";
            }
            cout<<endl;
    }
    //for bottom part.
    for(int i=0; i<n-1; i++){
        for(int j=i; j>=0; j--){
            cout<<" ";
        }
         cout<<"*";
        if(i!=n-2){
        for(int k=0; k<2*(n-i)-5; k++){
        	cout<<" ";
		}
		cout<<"*";
	}
		 
         cout<<endl;
    }

    return 0;
}