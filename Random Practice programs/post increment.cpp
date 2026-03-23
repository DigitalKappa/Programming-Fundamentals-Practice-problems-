#include<iostream>
using namespace std;
class Vehicle{
	public:
		int size;
		int length;
	public:
		Vehicle(){	
		}
		Vehicle(int s , int l){
			size = s;
			length = l;
		}
		Vehicle operator ++(this){
			Vehicle obj = *this;
			size++;
			length++;
			return obj;
		}
		void Display(){
			cout<<"The size = "<<size<<endl;
			cout<<"The length = "<<length<<endl;
		}
};
int main(){
	Vehicle part(5,10);
	part.Display();
	part++;
	part.Display();
	return 0;
}