#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};
Node *Insertlast(Node *head,int x)
{
	Node *temp = new Node(x);
	if(head==NULL)
	{
	 return temp;
	}
	 Node *curr = head;
	 while(curr->next!=NULL)
	 {
	 	curr=curr->next;
	 }
	 curr->next=temp;
	 return head;
}
void print(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" "<<endl;
		head=head->next;
	}
}
int main()
{
	Node *head = NULL;
	head=Insertlast(head,30);
	head=Insertlast(head,20);
	head=Insertlast(head,10);
	print(head);
}
