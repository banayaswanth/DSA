#include<iostream>
using namespace std;
struct Node
{
	int key;
	Node *left,*right;
	Node(int x)
	{
		key=x;
		left=right=NULL;
	}
};
void inorder(Node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->key<<" ";
		inorder(root->right);
	}
}
Node *first=NULL,*prev=NULL,*second=NULL;
void fixBst(Node *root)
{
	if(root==NULL)
	{
		return ;
	}
	fixBst(root->left);
	if(prev!=NULL && root->key<prev->key)
	{
		if(first==NULL)
		{
			first=prev;
		}
		second=root;
		
	}
	prev=root;
	fixBst(root->right);
}
int main()
{
	Node *root = new Node(20);
	root->left=new Node(10);
	root->left->left=new Node(5);
	root->left->right=new Node(30);
	root->right=new Node(40);
	root->right->left=new Node(15);
	root->right->right=new Node(50);
    inorder(root); 
    cout<<endl;
    fixBst(root);
    int temp=first->key;
    first->key=second->key;
    second->key=temp;
    inorder(root);
          
}
