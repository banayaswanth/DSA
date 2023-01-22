#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
	Node *prev;
	Node(int x)
	{
		data = x;
		next = NULL;
		prev = NULL;
	}
};
/*Node *insertbegin(Node *head, int x)
{
	Node *temp = new Node(x);
	temp->next=head;
	if(head!=NULL)
	head->prev=temp;
	return temp;
}*/
Node *insertlast(Node *head,int x)
{
	Node *temp = new Node(x);
	if(head==NULL)
	{
		return NULL;
	}
	Node *curr = head;
	while(curr->next!=NULL)
	{
		curr=curr->next;
	}
	curr->next=temp;
	temp->prev=curr;
	return head;
}
void print(Node *head)
{
	Node *curr=head;
	while(curr!=NULL)
	{
		cout<<curr->data<<" "<<endl;
		curr=curr->next;
	}
}
int main()
{
	Node *head = NULL;
	//head = insertbegin(head,10);
	//head = insertbegin(head,20);
	//head = insertbegin(head,30);
	head = insertlast(head,10);
	head = insertlast(head,20);
	head = insertlast(head,30);
	print(head);
}
