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
		Vehicle operator ++(){
			++size;
			++length;
			return *this;
		}
		void Display(){
			cout<<"The size = "<<size<<endl;
			cout<<"The length = "<<length<<endl;
		}
};
int main(){
	Vehicle part(5,10);
	++part;
	part.Display();
	return 0;
}