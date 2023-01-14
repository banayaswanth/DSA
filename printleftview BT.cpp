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
void leftview(Node *root)
{
	if(root==NULL) return;
	queue<Node *>q;
	q.push(root);
	while(q.empty()==false)
	{
		int count = q.size();
		for(int i=0;i<count;i++)
		{
			Node *curr = q.front();
			q.pop();
			if(i==0)
			{
				cout<<curr->data;
			}
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
	leftview(root);

}
