#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *right,*left;
	Node(int x)
	{
		data = x;
		left = right = NULL;
	}
};
int height(Node *root)
{
	if(root==NULL)
	{
		return 0;
		
	}
	else
	{
		return max(height(root->left),height(root->right))+1;
	}
}
int printkDist(Node *root,int k)
{
	int h=height(root);
	if(h<k)
	{
		cout<<"no elements";
	}
	else if(k==1)
	{
		cout<<root->data<<endl;
	}
	else
	{
		printkDist(root->left,k-1);
		printkDist(root->right,k-1);
	}
}
int main()
{
	int val;
	Node *root = new Node(54);
	root->left = new Node(20);
	root->right = new Node(285);
	root->left->left = new Node(87);
	root->right->left = new Node(980);
	root->right->left->left = new Node(650);
	printkDist(root,10);

}
