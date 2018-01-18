//Programme for the implementation of a linkedlist
#include <iostream>
using namespace std;

//creating a node
struct node{
	int data;
	node *next;
};
//linkedlist class
class linkedList{

//Private elements

private:
node *head,*tail;

//Public elements
linkedList(){
	head==NULL;
	tail==NULL;
}
//Addition function:function for inserting or adding a node
void addnode ( int n){
	node *temp=new node;
	temp->data=n;
	temp->next=NULL;
	
//When linkedlist is empty

if (head==NULL){
	head=temp;
	tail=temp;
}
//when the linked list is not empty
else
tail->next=temp;
tail=temp;
}

//Counting function-function used for counting the number of elements present in a linkedlist
void countnode(){
	node *temp;
	temp=head;
	int length=0
	if (head==NULL){
		cout<<"\\The linked list is empty:>>\n";
	}
	else if(head!=NULL){
		while (temp!=NULL){
			length + +;
			temp=temp->next;
		}
		cout<<"The total number of elements in a linked list are:"<<length<<"\n";
	}
}
//Inserting function-function for inserting a node at a particular position
void insertnode (int n2, int pos1) {
	int count=1;
	node *cur, *prev;
	cur=head;
	prev=cur;
	node *temp=new node;
	temp->data=n2;
	temp->next=NULL;
	while(count!=pos1){
		prev=cur;
		cur=cur->next;
		count + +;
	}
	prev->next=temp;
	temp->next=cur;
}
//Delete function:function for deleting a node from the end
void deletenode(){
	//If the linkedlist is empty
	if (head==NULL){
		cout<<"The list is empty"<<"\n";
	}
	//If the lisnkedlist has only one node
	else if(head==tail){
		delete hed;
		head=NULL;
		tail=NULL;
	}
	//If the linkedlist has more than one node
	else{
		node *temp;
		temp=head;
		head=head->next;
		delete temp;
	}
}
//Delete function:deleting a node from a certain position
void deleteat (int pos2){
	int count=0;
	node *cur, *prev=new node;
	node *temp;
	cur=head;
	
	while (count!=pos2){
		//cout<< count << endl;
		//count <<cur << endl;
		temp=cur;
		cur=cur->next;
		prev->next=cur;
		cur=cur->next;
		prev->next=cur;
		count + +;
		//cout << temp << endl;
		//cout << cur << endl;
		//count << cur->data << "\n";
	}
	//cout << cur->data << endl;
	//cout << temp->data << endl;
	//cout << prev->data << endl;
	delete temp;
}
//Display function: function used for displaying all the elements of a linkedlist
void displaynode(){
	node *temp;
	temp=head;
	if (head==NULL){
		cout<<"The list is empty"<<"\n";
	}
	else
	cout<<"The elements of the lists are :"<<"\n";
	while (temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}
};

//Main function of the programme
int main(){
	int pos1,n2,pos2;
	linkedList l;
	l.addnode(1);
	l.addnode(3);
	l.addnode(5);
	l.addnode(7);
	l.addnode(9);
	l.displaynode();
	l.countnode();
	//Integer and the position to be deleted
	cin>>n2>>pos1;
	cout<<"After insertion of the nodeat"<<pos1<<"\n";
	l.insertnode(n2,pos1);
	l.displaynode();
	l.deletenode();
	l.diplaynode();
	cin>>pos2;
	cout<<"After deletion of the node at"<<pos2<<"\n";
	l.deleteat(pos2);
	l.displaynode();
	return 0;
}
