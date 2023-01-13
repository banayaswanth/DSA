#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *left,*right;
	Node(int x)
	{
		data = x;
		left=right=NULL;
	}
};
int maxi(Node *root)
{
	if(root==NULL){
		return INT_MIN;
	}
	else
	{
		return max(root->data,max(maxi(root->left),maxi(root->right)));
	}
}

int main()
{
	Node *root = new Node(10);
	root->left = new Node(54);
	root->right = new Node(87);
	root->left->right = new Node(787);
	root->right->left = new Node(445);
	root->left->right->left = new Node(56);
	root->right->left->left = new Node(369);
	int val = maxi(root);
	cout<<val;

}
