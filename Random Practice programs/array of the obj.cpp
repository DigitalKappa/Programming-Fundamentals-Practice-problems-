#include<iostream>
using namespace std ;

class Animal{
	private:
		string name;
		int height;
		int age;
	public:
		Animal(){
		}
		Animal(string nam , int heigh, int ag){
			name = nam;
			height = heigh;
			age = ag;
		}
		void Getdata();
		void Display();
};

void Animal::Getdata(){
	cout<<"Write the name of the animal =";
	cin>>name;
	cout<<"WRite the height = ";
	cin>>height;
	cout<<"Write the age of the aimal = ";
	cin>>age;
	cout<<endl;
//	Animal(name , height , age);
}
void Animal::Display(){
	cout<<"Name = "<<name<<endl;
	cout<<"Hight = "<<height<<endl;
	cout<<"Age = "<<age<<endl;
}

int main(){
	int a;
	cout<<"enter your object rnge1//";
	cin>>a;
	Animal obj[a];
		for(int i=0; i<a; i++){
			cout<<"Write the info of the animal "<<i+1<<":"<<endl;
			obj[i].Getdata();
			obj[i].Display();
		}
		
		return 0;
}