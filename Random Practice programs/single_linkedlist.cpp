#include<iostream>
using namespace std;

struct node{
	public:
		int data;
		node *next;
	public:
		node(int n){
			data = n;
			next = NULL;
		}
};

class LinkedList{
	private :
		node *head ,*tail;
	public:
		LinkedList(){
			head = NULL;
			tail = NULL;
		}
		void AddNode(int n){
			node *temp = new node(n);
			if(head == NULL){
				head = temp;
				tail = temp;
			}
			else{
				temp->next = head ;
				head = temp;				
			}
		}
		
		void AddAtFirst(int n){
			node *temp = new node(n);
			temp->next = head;
			head = temp;
		}
	
		void AddAtLast(int n){
			node *temp = new node(n);
			tail->next = temp;
			tail = temp;
		}
		
		void AddAtMiddle(int n, int p){
			node *temp = new node(n);
			node *pos = head;
			for(int i=0; i<p-1 && pos!=NULL; i++){
				pos = pos->next;
			}
		    temp->next = pos->next;
		    pos->next = temp;
		}
		
		void GetHead(){
			node *temp = head;
			cout<<temp->data;
		}
		
		void GetTail(){
			node *temp = tail;
			cout<<temp->data;
		}
		
		void DeleteAtFirst(){
			head = head->next ; 
		}
		
		void DeleteAtLast(){
			 node *temp = head;
			 while(temp!=tail){
			 	temp = temp->next;
			 }
			 tail = temp;
		}
		
		void Search(int n){
			node *temp = head;
			while(temp!=NULL){
				if(temp->data == n){
		   		cout<<"Value found: "<<temp->data<<endl;
					return;
				}
				else
					temp = temp->next;
			}
			cout<<"The value you enter is not Found.."<<endl;
		}
		
		void DeleteFromMiddle(int p){
			node *pos = head;
			for(int i=0; i<p; i++){
				pos = pos->next;
			}
			pos = pos->next->next;
			delete [] pos;
		}
		
		void EditNode(int n, int v){
			node *temp = head;
			while(temp!=NULL){
				if(temp->data == v){
					temp->data = n;
					cout<<"The value is now Updated....";
					return;
				}
				else
					temp = temp->next;
			}
			cout<<"The value you enter is not Found.."<<endl;
		}
		
		void Display(){
			cout<<"The node is Given Below:";
			node *temp  = head;
			while(temp!= NULL){
				cout<<temp->data<<"->";
				temp  = temp->next;
			}
		}
};

int main(){
	LinkedList obj;
	int as;
	cout<<"Linked List have following functionalities...."<<endl;
	cout<<"1.  Add Node at Front.."<<endl;
	cout<<"2.  Add Node at Middle.."<<endl;
	cout<<"3.  Add Node at Last.."<<endl;
	cout<<"4.  Delete Node from Front.."<<endl;
	cout<<"5.  Delete Node from Middle.."<<endl;
	cout<<"6.  Delete Node from Last.."<<endl;
	cout<<"7.  Search the Node.."<<endl;
	cout<<"8.  Edit Node.."<<endl;
	cout<<"9.  Display Head.."<<endl;
	cout<<"10. Display Tail.."<<endl;
	cout<<"11. Display Complete Node.."<<endl;
	cout<<"12. Exit.."<<endl;
	code:
	cout<<endl;
	cout<<"Enter Option = ";
	cin>>as;
	cout<<endl;
	

	switch(as){
		case 1:
			int a;
			cout<<"Write the vaue of the node = ";
			cin>>a;
			obj.AddAtFirst(a);
			break;
		case 2:
			int b,p;
			cout<<"Write the value of Middle of the node = ";
			cin>>b;
			cout<<"Write the position where you want to place the node = ";
			cin>>p;
			obj.AddAtMiddle(b,p);
			break;
		case 3:
			int c;
			cout<<"Write the value of the node = ";
			cin>>c;
			obj.AddAtLast(c);
			break;
		case 4:
			obj.DeleteAtFirst();
			break;
		case 5:
			int f;
			cout<<"Write the position where you want to remove the node = ";
			cin>>f;
			obj.DeleteFromMiddle(f);
			break;
		case 6:
			obj.DeleteAtLast();
			break;
		case 7:
			int e;
			cout<<"Write the value you want to search in Node = ";
			cin>>e;
			obj.Search(e);
			break;
		case 8:
			int n,v;
			cout<<"Write the value you want to add = ";
			cin>>n;
			cout<<"Write the value  whose value you want to replace = ";
			cin>>v;
			obj.EditNode(n,v);
			break;
		case 9:
			obj.GetHead();
			break;
		case 10:
			obj.GetTail();
			break;
		case 11:
			obj.Display();
			break;
		case 12:
			return 0;
			break;
		default:
			cout<<"Invalid Input...";
			break;	
	}
	
	goto code;
	
	return 0;
}