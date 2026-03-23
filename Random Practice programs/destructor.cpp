#include<iostream>
using namespace std;
class Box{
	private:
		int length;
		int width;
	public:
		Box();
		Box(int );
		~Box();
};

		Box::Box(){
			length=5;
			cout<<length<<endl;
			cout<<"Default constructor called"<<endl;
		}
		Box::Box(int l ){
			cout<<"parameterized constructor called"<<endl;
		}
		Box::~Box(){
			cout<<"default destructor called"<<endl;
		}

int main(){
	Box *obj = new Box;			
	Box *obj1 = new Box(3); 	
	
	delete obj;
	delete obj1;
	return 0;
}