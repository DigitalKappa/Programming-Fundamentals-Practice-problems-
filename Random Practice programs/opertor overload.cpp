#include<iostream>
using namespace std;
class Vehicle{
	public:
		int a;
		int b;
	public:
		Vehicle(){
			
		}
		Vehicle(int c, int d){
			a = c;
			b = d;
		}
		Vehicle operator + (const Vehicle &obj){
			Vehicle obj1;
			obj1.a = a + obj.a;
			obj1.b = b + obj.b;
			return obj1;
		}
		void Display(){
			cout<<a<<endl;
			cout<<b<<endl;
		}
};
int main(){
	Vehicle part(3,4);
	Vehicle part1(5,7);
	Vehicle part2;
	part2 = part1 + part;
	part2.Display();
	
	Vehicle part3;
	part3 = part + part1 + part2;
	part3.Display();
	return 0;
}