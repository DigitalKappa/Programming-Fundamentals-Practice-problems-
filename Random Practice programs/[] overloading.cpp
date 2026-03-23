#include<iostream>
using namespace std;
class Vehicle{
	public:
		int size[5];
	public:
		Vehicle(){
			for(int i=0; i<5; i++){
				size[i] = 0;
			}
		}
		int& operator[](int index){
			if(index < 0 || index >=5){
				cout<<"outside the boundary."<<endl;
			}
		
				return size[index];
		}
		void Display(){
			for(int i=0; i<5; i++){
				cout<<size[i]<<endl;
			}
		}
};
int main(){
	Vehicle obj;
	obj[0] = 10;
	obj[1] = 20;
	obj[2] = 30;
	obj[3] = 40;
	obj[4] = 60;
	obj.Display();
	return 0;
}