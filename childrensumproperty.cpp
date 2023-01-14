#include<bits/stdc++.h>
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
bool ischildrensum(Node *root)
{
	if(root==NULL)
	{
		return true;
	}
	if(root->left==NULL && root->right==NULL)
	{
		return true;
	}
	int sum = 0;
	if(root->left!=NULL)
	{
		sum = sum+root->left->data;
	}
	if(root->right!=NULL)
	{
		sum = sum + root->right->data;
	}
	return (root->data==sum && ischildrensum(root->left) && ischildrensum(root->right));
}
int main()
{
	Node *root = new Node(20);
	root->left =  new Node(8);
	root->right = new Node(12);
	root->left->left = new Node(3);
	root->left->right = new Node(5);
	root->right->left = new Node(7);
	root->right->right = new Node(4);
	if(ischildrensum(root))
	{
		cout<<"yes";
	}
	else
	{
		cout<<"No";
	}
}
