#include<iostream>
#include <ctime> 
using namespace std;
int main(){

	int arr[100] = { 42, 173, 937, 562, 819, 247, 689, 354, 792, 126, 5, 873, 639, 291, 745, 382, 916, 467, 203, 558, 3, 887, 671, 149, 728, 395, 507, 834, 269, 618, 8, 952, 441, 776, 198, 523 , 857 , 309 , 647 , 971 , 11 ,762, 337, 589, 224, 693, 406, 841, 278, 715, 2, 892, 549, 376, 905, 251, 604, 438, 781, 167,496, 923, 315, 663, 139, 802, 459, 984, 287, 573, 4, 739, 368, 596, 217, 829, 474, 941, 326, 658,10, 753, 489, 235, 704, 412, 863, 532, 186, 629, 7, 965, 341, 514, 152, 746, 993, 6, 9, 100 };
	
	int a;
	cout<<"How many persons are playing the game = ";
	cin>>a;
	string name[a];
	int result[a];

	for(int i=0; i<a; i++){
		cout<<"Write your name = ";
		cin>>name[i];
		srand(time(0));
	    int temp = rand() % 1000 + 1;
	    
		cout<<"Guess any number from 0 to 1000"<<endl;
		int attempt;
		while(1){
			
			int g;
			cout<<"Guess any number = ";
			cin>>g;
		
			if(g>=1 || g<=1000){
				
				if(g>temp){
					cout<<"Selected number is Too high.."<<endl;
				}
				else if(g<temp){
					cout<<"Selected number is Too low.."<<endl;
				}
				else {
					cout<<"Congratulations you guess the right number...";
					break;
				}
				
				attempt++;	
			}
			else
			cout<<"Your input number is Invalid..."<<endl;
		}
		cout<<endl;
		cout<<"Your total numebr of attempts of "<<name[i]<<"is = "<<attempt<<endl;
			result[i] = attempt;
			attempt = 0;
	}

	
	return 0;
}