#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *left,*right;
	Node(int x)
	{
		data = x;
		left = NULL;
		right = NULL;
	}
};
bool isBST(Node *root,int min,int max)
{
    if(root==NULL)
	{
	   return true;	
	}	
	return(root->data>min&&root->data<max&&isBST(root->left,min,root->data)&&isBST(root->right,root->data,max));
}

int main()
{
	Node *root = new Node(20);
	root->left = new Node(19);
	root->right = new Node(23);
//	root->left->left = new Node(17);
//	root->right->left = new Node(21);
//	root->right->right = new Node(29);
	if(isBST(root,17,29))
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
