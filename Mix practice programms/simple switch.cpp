#include<iostream>
using namespace std;
int main(){
	cout<<"Select any one below:"<<endl;
	cout<<"1. Awais"<<endl;
	cout<<"2. Qais"<<endl;
	cout<<"3. Humais"<<endl;
	cout<<"4. Frass"<<endl;
	int a;
	cout<<"Write any number above them = ";
	cin>>a;
	switch(a){
	
   	case 1:
   		cout<<"Weh hum bahiyon ma sub sa bera ha or kal ya lahore bhe jay ga."<<endl<<"Is ka pas A54 5g mobilr bhi ha"<<endl<<"Or ya shadi shuda ha";
		break;
	case 2:
		cout<<"Ya dusray number per ata ha or ya boht jald baap bannay wala ha"<<endl<<"Y frass haider ko boht marata hota ha.";
		break;
	case 3:
		cout<<"Is ka name humais ha"<<endl<<"Ya her whaqt chup chup rehta ha"<<endl<<"Is ko boht jald gogle pixel 7 pro mil jay ga";
		break;
	case 4:
	 	cout<<"Is ka name frass ha"<<endl<<"Ya boht boht shirarti ha"<<endl<<"I ko ghar ma koi kuch nahi kehta"<<endl<<"Agar papa is ko martay to aj ya itns badmash na hota";
	 	break;
	default:
		cout<<"Write any valid number.";
		break;
	}
	return 0;
	
}