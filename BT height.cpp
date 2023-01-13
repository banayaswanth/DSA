#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *left,*right;
	Node(int x)
	{
		left=right=NULL;
		data = x;
	}
};
int height(Node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	else{
	
	return max(height(root->left),height(root->right))+1;
}
}
int main()
{
	int val;
	Node *root = new Node(10);
	root->left = new Node(100);
	root->right = new Node(45);
	root->right->left = new Node(48);
	root->right->left->right = new Node(23);
	val = height(root);
	cout<<val;
}
