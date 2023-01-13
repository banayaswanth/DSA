#include<iostream>
using namespace std;
struct Node 
{
	int data;
	Node *left,*right;
	Node(int x)
	{
		data = x;
		left=NULL;
		right=NULL;
	}
};
void print(Node *root)
{
	if(root!=NULL)
	{
		print(root->left);
		cout<<root->data<<endl;
		print(root->right);
	}
}
Node *insert(Node *root,int x)
{
	if(root==NULL)
	{
		return new Node(x);
	}
	else if(root->data<x)
	{
		root->right = insert(root->right,x);
	}
	else if(root->data>x)
	{
		root->left = insert(root->left,x);
	}
	return root;
}
Node *successor(Node *root)
{
	Node *curr = root;
	curr = curr->right;
	while(curr!=NULL && curr->left!=NULL)
	{
		curr=curr->left;
	}
	return curr;
}
Node *delet(Node *root,int x)
{
	if(root==NULL)
	{
		return root;
	}
	if(root->data<x)
	{
		root->right = delet(root->right,x);
		
	}
	else if(root->data>x)
	{
		root->left = delet(root->left,x);
	}
	else
	{
		if(root->left==NULL)
		{
			Node *temp = root->right;
			delete(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			Node *temp = root->left;
			delete root;
			return temp;
		}
		else
		{
			Node *succ = successor(root);
			root->data = succ->data;
			root->right = delet(root->right,succ->data);
		}
		return root;
	}
}
int main()
{
	Node *root = NULL;
	root = insert(root,10);
	root = insert(root,21);
	root = insert(root,19);
	root = insert(root,25);
	root = insert(root,23);
	root = insert(root,34);
	root = insert(root,3);
	root = insert(root,9);
	print(root);
	root = delet(root,21);
	print(root);
}
