#include<bits/stdc++.h>
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
void trasverse(Node *root)
{
	if(root==NULL)
	{ 
	    cout<<"No elements";	
	}
	queue<Node *>q;
	q.push(root);
	while(q.empty()==false)
	{
		Node *curr = q.front();
		q.pop();
		cout<<curr->data;
		if(curr->left!=NULL)
		{
			q.push(curr->left);
		}
		if(curr->right!=NULL)
		{
    		q.push(curr->right);
		}
	}
}
int main()
{
	Node *root = new Node(10);
	root->left = new Node(54);
	root->right = new Node(87);
	root->left->right = new Node(787);
	root->right->left = new Node(445);
	trasverse(root);
}
