#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t>0){
        int n;
        cin>>n;

        int count = 0;
        int a = INT_MAX;

        for(int i=1; i<a; i++){
            count = 0;
            int j = 1;  

            while(j<=n){
                if(i % j != 0){
                    break;
                }
                else{
                    count++;
                }
                j++;  
            }

            if(count == n){
                cout<<i<<endl;
                break;   
            }
        }

        t--;
    }

    return 0;
}