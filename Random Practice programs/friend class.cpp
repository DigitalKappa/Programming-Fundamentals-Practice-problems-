// friend class
#include<iostream>
using namespace std;

class Box;
class Box1{
	private:
		int length;
		int width;
	public:
		Box1(){
			length = 10;
			width = 30;
	}
		friend class Box;
};

class Box{
	public:

		void Display(Box1 obj1){
			cout<<"Length = "<<obj1.length<<endl;
			cout<<"Width = "<<obj1.width<<endl;
		}
};

int main(){
	Box1 obj;
	Box obj1;
	obj1.Display(obj);


	return 0;
}