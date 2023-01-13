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
		cout<<root->data;
		print(root->right);
	}
}
Node *insert(Node *root,int x)
{
	if(root==NULL)
	{
		return new Node(x);
	}
	if(root->data<x)
	{
		root->right = insert(root->right,x);
	}
	
	if(root->data>x)
	{
		root->left = insert(root->left,x);
	}
	return root;
}
bool isSearch(Node *root,int x)
{
	while(root!=NULL){
	
	if(root->data==x)
	{
		return true;
	}
	else if(root->data<x)
	{
		root=root->right;
	}
	else
	{
		root=root->left;
	}
  }
  return false;
}
int main()
{
	Node *root = NULL;
	root = insert(root,10);
	root = insert(root,23);
	root = insert(root,9);
	root = insert(root,45);
	root = insert(root,41);
	print(root);
	if(isSearch(root,100))
	{
		cout<<"yes";
	}
	else
	{
		cout<<"No";
	}
}
