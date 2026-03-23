//#include<iostream>
//using namespace std;
//int main(){
//	for(int i=1; i<=4; i++){
//		for(int j=1; j<=7; j++){
//			if(j>=5-i&&j<=3+i){
//				cout<<"*";
//			}
//			else
//				cout<<" ";
//				
//		}
//		cout<<endl;
//	}
//	return 0;
//}

#include<iostream>
using namespace std;
int main(){
	for(int i=0; i<=3; i++){
		for(int j=1; j<=7; j++){
			if(i==0&&j==4){
				cout<<"*";
			}
			else if(i==1&&(j-i||j+i)){
					cout<<"*";
			}
			else if(i==2&&(j-2||j+2)){
					cout<<"*";
			}
			else if(i==3){
					cout<<"*";
			}
			else
				cout<<" ";	
		}
		cout<<endl;
	}
	return 0;
}