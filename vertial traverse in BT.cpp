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
void traverse(Node *root)
{
	map<int,vector<int>>mp;
	queue<pair<Node *,int>>q;
	q.push({root,0});
	while(q.empty()==false)
	{
		auto p = q.front();
		Node *curr = p.first;
		int hd = p.second;
		mp[hd].push_back(curr->data);
		q.pop();
		if(curr->left!=NULL)
		{
			q.push({curr->left,hd-1});
		}
		if(curr->right!=NULL)
		{
			q.push({curr->right,hd+1});
		}
	}
	for(auto i : mp)
	{
		for(int yash : i.second)
		{
			cout<<yash;
		}
		cout<<"\n";
	}
}
int main()
{
	Node *root = new Node(10);
	root->left = new Node(56);
	root->left->left = new Node(5);
	root->right = new Node(24);
	root->right->left = new Node(20);
	root->right->right = new Node(41);
	traverse(root);
}
