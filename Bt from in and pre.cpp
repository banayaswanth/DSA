#include<iostream>
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
void inorder(Node *root)
{
	Node *curr = root;
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data;
		inorder(root->right);
	}
}
Node *tree(int in[],int pre[],int is,int ie)
{
	static int preindex = 0;
	if(is>ie)
	{
		return NULL;
	}
	Node *root = new Node(pre[preindex++]);
	int inindex;
	for(int i=is;i<=ie;i++)
	{
		if(in[i]==root->data)
		{
			inindex = i;
			break;
		}
	}
	root->left = tree(in,pre,is,inindex-1);
	root->right = tree(in,pre,inindex+1,ie);
	return root;
}
int main()
{
	int in[]={20,10,40,30,50};
	int pre[]={10,20,30,40,50};
	  int len = sizeof(in)/sizeof(in[0]);
    Node *root = tree(in,pre,0,len-1);
    inorder(root);
}
