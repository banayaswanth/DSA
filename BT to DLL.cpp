#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *left,*right;
	Node(int x)
	{
		data = x;
		left = right = NULL;
	}
};
Node *DLL(Node *root)
{
	if(root==NULL)
	{
		return root;
	}
	static Node *prev = NULL;
	Node *head = DLL(root->left);
	if(prev==NULL)
	{
		head = root;
	}
	else
	{
		root->left = prev;
		prev->right = root;
	}
	prev = root;
	DLL(root->right);
	return head;
}
void printlist(Node *head)
{
	Node *curr = head;
	while(curr!=NULL)
	{
	    cout<<curr->data;
		curr = curr->right;	
	}
}
int main()
{
	Node *root  = new Node(10);
	root->left = new Node(25);
	root->right = new Node(9);
	root->left->right = new Node(21);
	root->right->left = new Node(32);
	Node *head = DLL(root);
	printlist(head);

}
