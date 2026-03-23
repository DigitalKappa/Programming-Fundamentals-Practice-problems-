#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    //for top part.
    for(int i=1; i<=n; i++){
    	for(int k=1; k<=i; k++){
    			cout<<"*";
		}
	        for(int j=0; j<(2*n)-(2*i); j++){
	        	cout<<" ";
	        }
		        for(int k=1; k<=i; k++){
		    			cout<<"*";
				}
		        cout<<endl;
    }
    //for bottom part
    for(int i=n; i>=1; i--){
    	for(int k=1; k<=i; k++){
    			cout<<"*";
		}
	        for(int j=0; j<(2*n)-(2*i); j++){
	        	cout<<" ";
	        }
		        for(int k=1; k<=i; k++){
		    			cout<<"*";
				}
		        cout<<endl;
    }
    return 0;
}