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
	if(root==NULL) return;
	queue<Node *>q;
	q.push(root);
	q.push(NULL);
	while(q.size()>1)
	{
		Node *curr = q.front();
		q.pop();
		if(curr==NULL)
		{
			cout<<"\n";
			q.push(NULL);
			continue;
		}
		cout<<curr->data;
		if(curr->left!=NULL)
		{
			q.push(root->left);
		}
		if(curr->right!=NULL)
		{
			q.push(root->right);
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
	root->left->right->left = new Node(56);
	root->right->left->left = new Node(369);
	trasverse(root);
}
